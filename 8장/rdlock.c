#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "student.h"

#define START_ID 1401001

int main(int argc, char *argv[]) {
    int fd, id;
    struct student record;
    struct flock lock;

    // 명령행 인자 확인
    if (argc < 2) {
        fprintf(stderr, "사용법: %s file\n", argv[0]);
        exit(1);
    }

    // 파일 열기
    if ((fd = open(argv[1], O_RDONLY)) == -1) {
        perror(argv[1]);
        exit(2);
    }

    printf("\n검색할 학생의 학번 입력: ");
    while (scanf("%d", &id) == 1) {
        // 읽기 잠금 설정
        lock.l_type = F_RDLCK;
        lock.l_whence = SEEK_SET;
        lock.l_start = (id - START_ID) * sizeof(record);
        lock.l_len = sizeof(record);
        if (fcntl(fd, F_SETLKW, &lock) == -1) {
            perror(argv[1]);
            exit(3);
        }

        // 레코드 읽기
        lseek(fd, (id - START_ID) * sizeof(record), SEEK_SET);
        if ((read(fd, (char *)&record, sizeof(record)) > 0) && (record.id != 0)) {
            printf("이름: %s\t학번: %d\t점수: %d\n", record.name, record.id, record.score);
        } else {
            printf("레코드 %d 없음\n", id);
        }

        // 잠금 해제
        lock.l_type = F_UNLCK;
        fcntl(fd, F_SETLK, &lock);

        printf("\n검색할 학생의 학번 입력: ");
    }

    // 파일 닫기
    close(fd);
    exit(0);
}

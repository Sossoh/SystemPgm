#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char **argv) { // 'intmain'과 'intargc'를 'int main'과 'int argc'로 수정해야 합니다.
    static struct flock lock;
    int fd, ret;
    
    if (argc < 2) {
        fprintf(stderr, "사용법: %s 파일\n", argv[0]); 
        exit(1);
    }
    
    fd = open(argv[1], O_WRONLY);
    if(fd == -1) {
        printf("파일 열기 실패\n");
        exit(1);
    }
    
    lock.l_type = F_WRLCK;
    lock.l_start = 0;
    lock.l_whence = SEEK_SET;
    lock.l_len = 0; // 파일 전체에 대해 잠금
    lock.l_pid = getpid();
    
    ret = fcntl(fd, F_SETLKW, &lock);
    if(ret == 0) { // 파일 잠금 성공하면
        printf("파일 잠금 성공. 아무 키나 누르면 종료합니다.\n");
        getchar(); // 사용자가 키를 입력할 때까지 대기
    } else {
        printf("파일 잠금 실패\n");
    }
    
    // 잠금 해제
    lock.l_type = F_UNLCK;
    fcntl(fd, F_SETLK, &lock);
    
    close(fd); // 파일을 닫습니다.
    
    return 0;
}

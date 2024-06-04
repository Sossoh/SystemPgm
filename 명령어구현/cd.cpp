#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

// 디렉토리 변경 함수
void change_directory(const char *path) {
    if (chdir(path) == -1) {
        perror("chdir");
    }
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        fprintf(stderr, "Usage: %s <directory>\n", argv[0]);
        return 1;
    }
    const char *new_directory = argv[1];
    // 디렉토리 변경
    change_directory(new_directory);
    // 현재 작업 디렉토리 출력
    char cwd[1024];
    if (getcwd(cwd, sizeof(cwd)) != NULL) {
        printf("Current working directory: %s\n", cwd);
    } else {
        perror("getcwd");
    }

    return 0;
}


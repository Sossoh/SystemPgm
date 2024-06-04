#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <string.h>
// 디렉토리 및 하위 항목을 삭제하는 함수 (rm -r 디렉토리이름)
void remove_directory_recursive(const char *dir_name) {
    char command[1024];
    snprintf(command, sizeof(command), "rm -rf %s", dir_name);
    if (system(command) == -1) {
        perror("system");
    }
}


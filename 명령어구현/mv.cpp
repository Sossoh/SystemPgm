#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <string.h>


// 파일을 이동하거나 이름을 변경하는 함수 (mv 원본파일 대상파일)
void move_file(const char *source, const char *destination) {
    char command[1024];
    snprintf(command, sizeof(command), "mv %s %s", source, destination);
    if (system(command) == -1) {
        perror("system");
    }
}

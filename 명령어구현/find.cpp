#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

// 파일 찾기 (find /경로 -name 파일이름)
void find_file(const char *path, const char *file_name) {
    char command[256];
    snprintf(command, sizeof(command), "find %s -name %s", path, file_name);
    if (system(command) == -1) {
        perror("system");
    }
}

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

// 파일 권한 변경 (chmod 755 파일이름)
void change_file_mode(const char *mode, const char *file_name) {
    char command[256];
    snprintf(command, sizeof(command), "chmod %s %s", mode, file_name);
    if (system(command) == -1) {
        perror("system");
    }
}


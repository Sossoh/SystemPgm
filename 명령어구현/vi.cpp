#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
// vi 편집기로 파일 열기 (vi 파일이름)
void open_with_vi(const char *file_name) {
    char command[256];
    snprintf(command, sizeof(command), "vi %s", file_name);
    if (system(command) == -1) {
        perror("system");
    }
}


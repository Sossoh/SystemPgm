#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

// nano ������� ���� ���� (nano �����̸�)
void open_with_nano(const char *file_name) {
    char command[256];
    snprintf(command, sizeof(command), "nano %s", file_name);
    if (system(command) == -1) {
        perror("system");
    }
}





#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
// vi ������� ���� ���� (vi �����̸�)
void open_with_vi(const char *file_name) {
    char command[256];
    snprintf(command, sizeof(command), "vi %s", file_name);
    if (system(command) == -1) {
        perror("system");
    }
}


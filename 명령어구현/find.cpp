#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

// ���� ã�� (find /��� -name �����̸�)
void find_file(const char *path, const char *file_name) {
    char command[256];
    snprintf(command, sizeof(command), "find %s -name %s", path, file_name);
    if (system(command) == -1) {
        perror("system");
    }
}

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <string.h>
// ���丮 �� ���� �׸��� �����ϴ� �Լ� (rm -r ���丮�̸�)
void remove_directory_recursive(const char *dir_name) {
    char command[1024];
    snprintf(command, sizeof(command), "rm -rf %s", dir_name);
    if (system(command) == -1) {
        perror("system");
    }
}


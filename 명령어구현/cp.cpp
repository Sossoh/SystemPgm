#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <string.h>
// ������ �����ϴ� �Լ� (cp �������� �������)
void copy_file(const char *source, const char *destination) {
    char command[1024];
    snprintf(command, sizeof(command), "cp %s %s", source, destination);
    if (system(command) == -1) {
        perror("system");
    }
}


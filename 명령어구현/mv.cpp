#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <string.h>


// ������ �̵��ϰų� �̸��� �����ϴ� �Լ� (mv �������� �������)
void move_file(const char *source, const char *destination) {
    char command[1024];
    snprintf(command, sizeof(command), "mv %s %s", source, destination);
    if (system(command) == -1) {
        perror("system");
    }
}

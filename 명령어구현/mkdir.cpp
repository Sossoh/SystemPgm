#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <string.h>


// ���丮�� �����ϴ� �Լ� (mkdir ���丮�̸�)
void make_directory(const char *dir_name) {
    if (mkdir(dir_name, 0755) == -1) {
        perror("mkdir");
    }
}



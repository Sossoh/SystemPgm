#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <string.h>

// ������ �����ϴ� �Լ� (rm �����̸�)
void remove_file(const char *file_name) {
    if (remove(file_name) == -1) {
        perror("remove");
    }
}


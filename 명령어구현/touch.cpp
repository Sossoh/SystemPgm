#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <string.h>


// �� ������ �����ϴ� �Լ� (touch �����̸�)
void touch_file(const char *file_name) {
    FILE *file = fopen(file_name, "w");
    if (file == NULL) {
        perror("fopen");
    } else {
        fclose(file);
    }
}


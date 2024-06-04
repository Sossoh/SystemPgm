#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <string.h>

// ���� ������ ����ϴ� �Լ� (cat �����̸�)
void cat_file(const char *file_name) {
    FILE *file = fopen(file_name, "r");
    if (file == NULL) {
        perror("fopen");
        return;
    }
    char line[256];
    while (fgets(line, sizeof(line), file)) {
        printf("%s", line);
    }
    fclose(file);
}


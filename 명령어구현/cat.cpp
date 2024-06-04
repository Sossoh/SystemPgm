#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <string.h>

// 파일 내용을 출력하는 함수 (cat 파일이름)
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


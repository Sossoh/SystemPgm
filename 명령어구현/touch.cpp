#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <string.h>


// 새 파일을 생성하는 함수 (touch 파일이름)
void touch_file(const char *file_name) {
    FILE *file = fopen(file_name, "w");
    if (file == NULL) {
        perror("fopen");
    } else {
        fclose(file);
    }
}


#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <string.h>


// 디렉토리를 생성하는 함수 (mkdir 디렉토리이름)
void make_directory(const char *dir_name) {
    if (mkdir(dir_name, 0755) == -1) {
        perror("mkdir");
    }
}



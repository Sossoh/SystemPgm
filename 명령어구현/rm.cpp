#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <string.h>

// 파일을 삭제하는 함수 (rm 파일이름)
void remove_file(const char *file_name) {
    if (remove(file_name) == -1) {
        perror("remove");
    }
}


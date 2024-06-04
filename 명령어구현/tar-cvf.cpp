#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

// 디렉토리를 tar 파일로 압축하는 함수 (tar -cvf 파일.tar 디렉토리)
void create_tar_archive(const char *tar_file, const char *directory) {
    char command[256];
    snprintf(command, sizeof(command), "tar -cvf %s %s", tar_file, directory);
    if (system(command) == -1) {
        perror("system");
    }
}

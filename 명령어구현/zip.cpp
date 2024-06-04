#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
// 파일이나 디렉토리를 zip 파일로 압축하는 함수 (zip 파일.zip 파일/디렉토리)
void create_zip_archive(const char *zip_file, const char *file_or_directory) {
    char command[256];
    snprintf(command, sizeof(command), "zip -r %s %s", zip_file, file_or_directory);
    if (system(command) == -1) {
        perror("system");
    }
}

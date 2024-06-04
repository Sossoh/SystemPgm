#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
// 파일에서 텍스트 검색 (grep '텍스트' 파일이름)
void grep_text_in_file(const char *text, const char *file_name) {
    char command[256];
    snprintf(command, sizeof(command), "grep '%s' %s", text, file_name);
    if (system(command) == -1) {
        perror("system");
    }
}

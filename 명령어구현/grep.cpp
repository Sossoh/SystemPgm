#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
// ���Ͽ��� �ؽ�Ʈ �˻� (grep '�ؽ�Ʈ' �����̸�)
void grep_text_in_file(const char *text, const char *file_name) {
    char command[256];
    snprintf(command, sizeof(command), "grep '%s' %s", text, file_name);
    if (system(command) == -1) {
        perror("system");
    }
}

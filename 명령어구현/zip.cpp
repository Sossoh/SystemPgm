#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
// �����̳� ���丮�� zip ���Ϸ� �����ϴ� �Լ� (zip ����.zip ����/���丮)
void create_zip_archive(const char *zip_file, const char *file_or_directory) {
    char command[256];
    snprintf(command, sizeof(command), "zip -r %s %s", zip_file, file_or_directory);
    if (system(command) == -1) {
        perror("system");
    }
}

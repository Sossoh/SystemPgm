#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
// zip ������ �����ϴ� �Լ� (unzip ����.zip)
void extract_zip_archive(const char *zip_file) {
    char command[256];
    snprintf(command, sizeof(command), "unzip %s", zip_file);
    if (system(command) == -1) {
        perror("system");
    }
}

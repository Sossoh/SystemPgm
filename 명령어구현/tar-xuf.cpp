#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

// tar ������ �����ϴ� �Լ� (tar -xvf ����.tar)
void extract_tar_archive(const char *tar_file) {
    char command[256];
    snprintf(command, sizeof(command), "tar -xvf %s", tar_file);
    if (system(command) == -1) {
        perror("system");
    }
}

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

// ���丮�� tar ���Ϸ� �����ϴ� �Լ� (tar -cvf ����.tar ���丮)
void create_tar_archive(const char *tar_file, const char *directory) {
    char command[256];
    snprintf(command, sizeof(command), "tar -cvf %s %s", tar_file, directory);
    if (system(command) == -1) {
        perror("system");
    }
}

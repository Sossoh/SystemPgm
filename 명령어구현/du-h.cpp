#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
// ��ũ ��뷮�� Ȯ���ϴ� �Լ� (du -h)
void check_disk_usage() {
    if (system("du -h") == -1) {
        perror("system");
    }
}

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

// ��ũ ������ Ȯ���ϴ� �Լ� (df -h)
void check_disk_space() {
    if (system("df -h") == -1) {
        perror("system");
    }
}

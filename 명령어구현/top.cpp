#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
// �ǽð� ���μ��� ����͸� (top)
void monitor_processes() {
    if (system("top") == -1) {
        perror("system");
    }
}

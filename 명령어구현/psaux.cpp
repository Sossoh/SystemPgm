#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
// ��� ���μ��� ��� ���� (ps aux)
void list_all_processes() {
    if (system("ps aux") == -1) {
        perror("system");
    }
}


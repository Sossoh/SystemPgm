#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
// 모든 프로세스 목록 보기 (ps aux)
void list_all_processes() {
    if (system("ps aux") == -1) {
        perror("system");
    }
}


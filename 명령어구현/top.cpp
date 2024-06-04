#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
// 실시간 프로세스 모니터링 (top)
void monitor_processes() {
    if (system("top") == -1) {
        perror("system");
    }
}

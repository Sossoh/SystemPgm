#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
// 디스크 사용량을 확인하는 함수 (du -h)
void check_disk_usage() {
    if (system("du -h") == -1) {
        perror("system");
    }
}

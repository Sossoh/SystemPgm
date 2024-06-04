#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

// 디스크 공간을 확인하는 함수 (df -h)
void check_disk_space() {
    if (system("df -h") == -1) {
        perror("system");
    }
}

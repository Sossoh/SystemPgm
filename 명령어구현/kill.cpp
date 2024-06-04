#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


// 프로세스를 종료하는 함수 (kill 프로세스ID)
void kill_process(const char *pid) {
    char command[256];
    snprintf(command, sizeof(command), "kill %s", pid);
    if (system(command) == -1) {
        perror("system");
    }
}


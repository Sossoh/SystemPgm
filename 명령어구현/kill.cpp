#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


// ���μ����� �����ϴ� �Լ� (kill ���μ���ID)
void kill_process(const char *pid) {
    char command[256];
    snprintf(command, sizeof(command), "kill %s", pid);
    if (system(command) == -1) {
        perror("system");
    }
}


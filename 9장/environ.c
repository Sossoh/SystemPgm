#include <stdio.h>
#include <stdlib.h>

/* 모든 환경 변수를 출력한다. */
int main(int argc, char *argv[])
{
    char **ptr;
    extern char **environ;

    /* 모든 환경 변수 값을 출력 */
    for (ptr = environ; *ptr != 0; ptr++) {
        printf("%s \n", *ptr);
    }

    return 0;
}

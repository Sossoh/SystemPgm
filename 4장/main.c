#include <stdio.h>
#include "copy.h" // copy() 함수의 선언을 포함하는 헤더 파일
char line[MAXLINE];    // 입력 줄
char longest[MAXLINE]; // 가장 긴 줄

/* 입력 줄 중에서 가장 긴 줄 프린트 */
int main() {
    int len;
    int max;

    max = 0;
    while (fgets(line, MAXLINE, stdin) != NULL) {
        len = strlen(line);
        if (len > max) {
            max = len;
            copy(line, longest);
        }
    }

    if (max > 0) // 입력 줄이 있었다면
        printf("%s", longest);

    return 0;
}

 #include <stdio.h>
 #define MAXLINE 100
 void copy(char from[], char to[]);
 char line[MAXLINE]; // 입력줄
char longest[MAXLINE]; // 가장긴줄
/*입력줄가운데가장긴줄프린트*/
 main()
 {
 int len;
 int max;
 max = 0;
 while (gets(line) != NULL) {
 len = strlen(line);
 if (len > max) {
 max = len;
 copy(line, longest);
 }
 } if (max > 0) // 입력줄이있었다면
printf("%s", longest);
 return 0;
 }
 /* copy: from을to에복사; to가충분히크다고가정*/
 void copy(char from[], char to[])
 {
 int i;
 i = 0;
 while ((to[i] = from[i]) != '\0')
 ++i;
 }
/*단일모듈프로그램*/

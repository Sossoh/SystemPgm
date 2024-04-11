<h1>
  <li> 1. fd 구하는 법 2가지정도 설명하기</li>
  <li> 2. fd 복사해서 2개의 fd가 하나의 파이 가리키기</li>
</h1>

첫번째 실습
1. vi f1
#include<stdio.h>

int main(){
        FILE *fp = fopen("hello.txt","w"); // 쓰기모드"w"로 "hello.txt"
         FILE *fp2 = fopen("hello2.txt","w"); // 쓰기모드"w"로 "hello.txt"
        while (1){
        }
        fclose(fp); // 파일 열었으니 닫기
        return 0;
}

2. gcc f1 
3.  ls 
4. ./a.out
5. 다른 창으로 가서 
6. -ps ef | grep a.out
7. 위에있는 걸로 쓰면됨 (돌아가고 있는 거니깐..) 
이유 : 다른 창 열어서 -ps ef 하면 볼 수 있다
8. ls -l /proc/[PID]/fd/
프로그램에 명시적으로 입력, 출력 또는 에러를 처리하는 코드가 없는 경우, 파일 디스크립터 0, 1 및 2는 터미널 디바이스에 연결됩니다.
9. 원래 창으로 넘어와서 실행종료 후
strace는 디버깅에 사용되는 도구로 널리 알려져 있습니다.
10. strace라는 디버깅 툴을 사용해서 보겠습니다
11. strace ./a.out
12. vi f1.c
13. 무한루프 지우고 printf("hello!\n");
14. gcc fi.c
15. ./a.out
16 strace ./a.out
17. man 2 openat > /RETURN VALUE 
     man 2 write
 
두번째 실습
1. vi bok.c
 #include <unistd.h>
#include <fcntl.h>
#include <stdio.h>

int main() {
    int fd1 = open("file.txt", O_RDONLY); // 파일 디스크립터 3으로 파일을 엽니다.
    if (fd1 == -1) {
        // perror("open");
        return 1; // 파일을 열지 못하면 오류 메시지를 출력하지 않고 프로그램을 종료합니다.
    }

    int fd2 = dup(fd1); // 파일 디스크립터 3을 복제하여 새로운 파일 디스크립터 4를 만듭니다.
    if (fd2 == -1) {
        perror("dup");
        close(fd1); // 파일 디스크립터 3를 닫습니다.
        return 1;
    }

    printf("File descriptors: %d, %d\n", fd1, fd2);

    close(fd1);
    close(fd2);

    return 0;
}

2. make bok
3. ./bok
4. strace bok 
이런 dup 함수는 동일한 파일에 대한 다중 파일 디스크립터를 사용해야 할 때 유용합니다.


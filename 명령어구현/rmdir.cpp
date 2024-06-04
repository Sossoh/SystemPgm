#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void remove_directory(const char *path) {
    if (rmdir(path) == -1) {
        perror("rmdir");
        exit(EXIT_FAILURE);
    }
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        fprintf(stderr, "사용법: %s <디렉토리이름>\n", argv[0]);
        return EXIT_FAILURE;
    }

    remove_directory(argv[1]);
    printf("디렉토리 '%s'가 삭제되었습니다.\n", argv[1]);

    return EXIT_SUCCESS;
}











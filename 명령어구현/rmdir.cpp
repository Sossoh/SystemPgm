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
        fprintf(stderr, "����: %s <���丮�̸�>\n", argv[0]);
        return EXIT_FAILURE;
    }

    remove_directory(argv[1]);
    printf("���丮 '%s'�� �����Ǿ����ϴ�.\n", argv[1]);

    return EXIT_SUCCESS;
}











#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <string.h>

// ������ �̵��ϰų� �̸��� �����ϴ� �Լ� (mv �������� �������)
void move_file(const char *source, const char *destination, int interactive, int force, int no_clobber, int update, int verbose) {
    char command[1024];
    snprintf(command, sizeof(command), "mv");

    // �ɼ� �߰�
    if (interactive) {
        strcat(command, " -i");
    }
    if (force) {
        strcat(command, " -f");
    }
    if (no_clobber) {
        strcat(command, " -n");
    }
    if (update) {
        strcat(command, " -u");
    }
    if (verbose) {
        strcat(command, " -v");
    }

    // ���� ���ϰ� ��� ���� �߰�
    strcat(command, " ");
    strcat(command, source);
    strcat(command, " ");
    strcat(command, destination);

    // ��ɾ� ����
    if (system(command) == -1) {
        perror("system");
    }
}

// ���� ����
int main(int argc, char *argv[]) {
    if (argc < 3) {
        fprintf(stderr, "Usage: %s <source> <destination> [options]\n", argv[0]);
        return 1;
    }

    const char *source = argv[1];
    const char *destination = argv[2];
    
    // �ɼ� �ʱ�ȭ
    int interactive = 0;
    int force = 0;
    int no_clobber = 0;
    int update = 0;
    int verbose = 0;

    // �ɼ� �Ľ�
    for (int i = 3; i < argc; i++) {
        if (strcmp(argv[i], "-i") == 0) {
            interactive = 1;
        } else if (strcmp(argv[i], "-f") == 0) {
            force = 1;
        } else if (strcmp(argv[i], "-n") == 0) {
            no_clobber = 1;
        } else if (strcmp(argv[i], "-u") == 0) {
            update = 1;
        } else if (strcmp(argv[i], "-v") == 0) {
            verbose = 1;
        } else {
            fprintf(stderr, "Unknown option: %s\n", argv[i]);
            return 1;
        }
    }

    // ���� �̵� �Ǵ� �̸� ����
    move_file(source, destination, interactive, force, no_clobber, update, verbose);

    return 0;
}


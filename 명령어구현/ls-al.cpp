#include <stdio.h>
#include <dirent.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <time.h>
// 숨김 파일 포함 디렉토리 내용을 자세히 출력하는 함수 (ls -al)
void list_directory_all_long(const char *path) {
    struct dirent *entry;
    DIR *dp = opendir(path);
    struct stat file_stat;
    char fullpath[1024];
    char timebuf[80];

    if (dp == NULL) {
        perror("opendir");
        return;
    }

    while ((entry = readdir(dp))) {
        snprintf(fullpath, sizeof(fullpath), "%s/%s", path, entry->d_name);
        stat(fullpath, &file_stat);
        strftime(timebuf, sizeof(timebuf), "%b %d %H:%M", localtime(&file_stat.st_mtime));
        printf("%10.10s %ld %s %s %ld %s %s\n",
               (S_ISDIR(file_stat.st_mode)) ? "d" : "-",
               file_stat.st_nlink,
               getpwuid(file_stat.st_uid)->pw_name,
               getgrgid(file_stat.st_gid)->gr_name,
               file_stat.st_size,
               timebuf,
               entry->d_name);
    }

    closedir(dp);
}
}


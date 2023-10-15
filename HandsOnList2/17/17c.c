/*
============================================================================
Name : 17c.c
Author : Aarush Kaswan
Description : Write a program to execute ls -l | wc.
    a. use fcntl
Date: 5th Oct, 2023.
============================================================================
*/

#include<unistd.h>
#include<fcntl.h>

int main(void) {
    int fd[2];
    pipe(fd);
    if(fork()) {
        close(1);
        close(fd[0]);
        fcntl(fd[1], F_DUPFD, 1);
        execl("/bin/ls", "ls", "-l", NULL);
    } else {
        close(0);
        close(fd[1]);
        fcntl(fd[0], F_DUPFD, 0);
        execlp("wc", "wc", NULL);
    }

    return 0;
}

/*
============================================================================
Name : 17b.c
Author : Aarush Kaswan
Description : Write a program to execute ls -l | wc.
    a. use dup2
Date: 5th Oct, 2023.
============================================================================
*/

#include<unistd.h>

int main(void) {
    int fd[2];
    pipe(fd);
    if(fork()) {
        close(fd[0]);
        dup2(fd[1], 1);
        execl("/bin/ls", "ls", "-l", NULL);
    } else {
        close(fd[1]);
        dup2(fd[0], 0);
        execlp("wc", "wc", NULL);
    }

    return 0;
}

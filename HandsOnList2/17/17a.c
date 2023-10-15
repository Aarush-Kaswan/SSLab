/*
============================================================================
Name : 17a.c
Author : Aarush Kaswan
Description : Write a program to execute ls -l | wc.
    a. use dup
Date: 5th Oct, 2023.
============================================================================
*/

#include<unistd.h>

int main(void) {
    int fd[2];
    pipe(fd);
    if(fork()) {
        close(1);
        close(fd[0]);
        dup(fd[1]);
        execl("/bin/ls", "ls", "-l", NULL);
    } else {
        close(0);
        close(fd[1]);
        dup(fd[0]);
        execlp("wc", "wc", NULL);
    }

    return 0;
}

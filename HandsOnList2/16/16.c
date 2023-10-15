/*
============================================================================
Name : 16.c
Author : Aarush Kaswan
Description : Write a program to send and receive data from parent to child vice versa. Use two way
communication.
Date: 5th Oct, 2023.
============================================================================
*/

#include<unistd.h>
#include<string.h>

int main(void) {
    int fd1[2], fd2[2];
    char buff[80];
    pipe(fd1);
    pipe(fd2);
    if(fork()) {
        char* msg = "Message from parent.\n";
        close(fd1[0]);
        write(fd1[1], msg, strlen(msg));
        
        close(fd2[1]);
        read(fd2[0], buff, sizeof(buff));
        write(1, buff, strlen(buff));
    } else {
        char* msg = "Message from child.\n";
        close(fd1[1]);
        read(fd1[0], buff, sizeof(buff));
        write(1, buff, strlen(buff));
        
        close(fd2[0]);
        write(fd2[1], msg, strlen(msg));
    }

    return 0;
}

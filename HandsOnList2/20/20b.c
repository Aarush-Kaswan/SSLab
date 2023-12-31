/*
============================================================================
Name : 20b.c
Author : Aarush Kaswan
Description : Write two programs so that both can communicate by FIFO -Use one way communication.
Date: 6th Oct, 2023.
============================================================================
*/

#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>

int main(void) {
    char buff[80];
    int fd = open("../19/fifo", O_RDONLY);
    read(fd, buff, sizeof(buff));
    printf("The text: %s\n", buff);

    return 0;
}

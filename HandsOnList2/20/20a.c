/*
============================================================================
Name : 20a.c
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
    int fd = open("../19/fifo", O_WRONLY);
    printf("Enter the text: ");
    scanf("%[^\n]", buff);
    write(fd, buff, sizeof(buff));

    return 0;
}

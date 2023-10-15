#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>

int main(void) {
    char buff[80];
    int fd = open("../fifo", O_WRONLY);
    printf("Enter the text: ");
    scanf("%[^\n]", buff);
    write(fd, buff, sizeof(buff));

    return 0;
}

/*
============================================================================
Name : 19c.c
Author : Aarush Kaswan
Description : Create a FIFO file by
    mknod system call
Date: 5th Oct, 2023.
============================================================================
*/

#include<unistd.h>
#include<sys/stat.h>

int main(void) {
    mknod("fifo", S_IFIFO | 0666, 0);

    return 0;
}

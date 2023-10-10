/*
============================================================================
Name : 12.c
Author : Aarush Kaswan
Description : Write a program to find out the opening mode of a file. Use fcntl.
Date: 20th Aug, 2023.
============================================================================
*/
#include<unistd.h>
#include<fcntl.h>
#include<stdio.h>
int main() {
	int fd = open("temp", O_RDWR);
	printf("%d\n", fcntl(fd,F_GETFL));
	
	return 0;
}

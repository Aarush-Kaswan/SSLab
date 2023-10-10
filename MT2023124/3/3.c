/*
============================================================================
Name : 3.c
Author : Aarush Kaswan
Description : Write a program to create a file and print the file descriptor value. Use creat ( ) system call
Date: 11th Aug, 2023.
============================================================================
*/
#include<stdio.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
int main() {
	int fd = creat("myFile",S_IRUSR);
	printf("%d", fd);
	return 0;
}

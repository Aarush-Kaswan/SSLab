/*
============================================================================
Name : 22.c
Author : Aarush Kaswan
Description : Write a program, open a file, call fork, and then write to the file by both the child as well as the parent processes. Check output of the file.
Date: 8th Sep, 2023.
============================================================================
*/
#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

int main(void) {
	int fd = open("abc", O_RDWR | O_TRUNC);
	char* str;

	if(fork()) {
		str = "Parent wrote this\n";
		write(fd, str, strlen(str));
	} else {
		str = "Child wrote this\n";
		write(fd, str, strlen(str));
	}

	return 0;
}

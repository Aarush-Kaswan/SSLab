/*
============================================================================
Name : 11c.c
Author : Aarush Kaswan
Description : Write a program to open a file, duplicate the file descriptor and append the file with both the descriptors and check whether the file is updated properly or not.
		c. use fcntl
Date: 20th Aug, 2023.
============================================================================
*/
#include<unistd.h>
#include<fcntl.h>
#include<stdio.h>
int main() {
	int fd = open("temp", O_RDWR);
	int duplicateFD = fcntl(fd, F_DUPFD, 10);

	write(fd, "Gaddari ",8 );
	write(duplicateFD, "karbe!!\n", 8);
	return 0;
}

/*
============================================================================
Name : 11a.c
Author : Aarush Kaswan
Description : Write a program to open a file, duplicate the file descriptor and append the file with both the descriptors and check whether the file is updated properly or not.
		a. use dup
Date: 20th Aug, 2023.
============================================================================
*/
#include<unistd.h>
#include<fcntl.h>
#include<stdio.h>
int main() {
	int fd = open("temp", O_RDWR);
	int duplicateFD = dup(fd);

	write(fd, "Jaldi waha ",11 );
	write(duplicateFD, "se hato!!", 9);
	
	return 0;
}

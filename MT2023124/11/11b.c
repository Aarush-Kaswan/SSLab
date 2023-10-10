/*
============================================================================
Name : 11b.c
Author : Aarush Kaswan
Description : Write a program to open a file, duplicate the file descriptor and append the file with both the descriptors and check whether the file is updated properly or not.
		b. use dup2
Date: 20th Aug, 2023.
============================================================================
*/
#include<unistd.h>
#include<fcntl.h>
#include<stdio.h>
int main() {
	int fd = open("temp", O_RDWR);
	int duplicateFD = dup2(fd,5);

	write(fd, "Jaldi waha ",11 );
	write(duplicateFD, "se hato!!", 9);
	return 0;
}

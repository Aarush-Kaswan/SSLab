/*
============================================================================
Name : 27a.c
Author : Aarush Kaswan
Description : Write a program to execute ls -Rl by the following system calls
		a. execl
Date: 8th Sep, 2023.
============================================================================
*/
#include<stdio.h>
#include<unistd.h>

int main(void) {
	execl("/bin/ls", "ls", "-R", "-l", NULL);

	return 0;
}

/*
============================================================================
Name : 27d.c
Author : Aarush Kaswan
Description : Write a program to execute ls -Rl by the following system calls
		d. execv
Date: 8th Sep, 2023.
============================================================================
*/
#include<stdio.h>
#include<unistd.h>

int main(void) {
	char* arr[] = {"ls", "-R", "-l", NULL};
	execv("/bin/ls", arr);

	return 0;
}

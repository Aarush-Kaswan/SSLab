/*
============================================================================
Name : 21.c
Author : Aarush Kaswan
Description : Write a program, call fork and print the parent and child process id.
Date: 8th Sep, 2023.
============================================================================
*/
#include<stdio.h>
#include<unistd.h>
#include<sys/wait.h>

int main(void) {
	if(fork())
		printf("Parent process id: %d\n", getpid());
	else {
		printf("Child process id: %d\n", getpid());
		sleep(1);
	}

//	wait(NULL);
	return 0;
}

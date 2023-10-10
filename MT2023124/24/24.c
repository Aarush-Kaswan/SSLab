/*
============================================================================
Name : 24.c
Author : Aarush Kaswan
Description : Write a program to create an orphan process.
Date: 8th Sep, 2023.
============================================================================
*/
#include<stdio.h>
#include<unistd.h>

int main(void) {
	if(fork()) {
		//sleep(100);
		printf("Parent process id: %d\n", getpid());
		sleep(1);
	} else {
		printf("Child process id : %d\n", getpid());
		printf("Parent process id : %d\n", getppid());
		//getchar();
		sleep(3);
		printf("Parent process id : %d\n", getppid());
	}
	return 0;
}

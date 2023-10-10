/*
============================================================================
Name : 23.c
Author : Aarush Kaswan
Description : Write a program to create a Zombie state of the running program.
Date: 8th Sep, 2023.
============================================================================
*/
#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>

int main(void) {
	if(fork()) {
		//sleep(10);
		getchar();
	} else {
		printf("Child process id : %d\n", getpid());
		exit(0);
	}
	return 0;
}

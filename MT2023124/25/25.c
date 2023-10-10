/*
============================================================================
Name : 25.c
Author : Aarush Kaswan
Description : Write a program to create three child processes. The parent should wait for a particular child (use waitpid system call).
Date: 8th Sep, 2023.
============================================================================
*/
#include<stdio.h>
#include<unistd.h>
#include<sys/wait.h>

int main(void) {
	int pid = fork();
	if(pid) {
		if(fork()) {
			if(!fork()) {
				printf("Child#3 process id: %d\n", getpid());
				printf("Child#3 parent process id: %d\n", getppid());
				sleep(1);
				printf("Child#3 wokeup\n");
			}
		} else {
			printf("Child#2 process id: %d\n", getpid());
			printf("Child#2 parent process id: %d\n", getppid());
			sleep(5);
			printf("Child#2 wokeup\n");
		}
	} else {
		printf("Child#1 process id: %d\n", getpid());
		printf("Child#1 parent process id: %d\n", getppid());
		sleep(3);
		printf("Child#1 wokeup\n");
	}
	waitpid(pid, NULL, 0);

	return 0;
}

/*
============================================================================
Name : 20.c
Author : Aarush Kaswan
Description : Find out the priority of your running program. Modify the priority with nice command.
Date: 8th Sep, 2023.
============================================================================
*/
#include<stdio.h>
#include<unistd.h>
#include<sched.h>
int main () {
	struct sched_param sch;
	int pid = getpid();
	int status = sched_getparam(pid, &sch);
	printf("Current Process ID: %d\n",pid);
	printf("Current Priority: %d\n", sch.sched_priority);
	int priority = nice(10);
	printf("New Priority: %d\n", priority);
	getchar();
	return 0;
}


/*
============================================================================
Name : 29.c
Author : Aarush Kaswan
Description : Write a program to get scheduling policy and modify the scheduling policy (SCHED_FIFO, SCHED_RR).
Date: 8th Sep, 2023.
============================================================================
*/
#include<stdio.h>
#include<sched.h>

int main(void) {
	int policy = sched_getscheduler(0);
	switch(policy){
	case SCHED_OTHER:
		printf("Other policy\n");
		break;
	case SCHED_FIFO:
		printf("Fifo policy\n");
		break;
	case SCHED_RR:
		printf("RR policy\n");
		break;
	}
	struct sched_param p;
	p.sched_priority=99;
	sched_setscheduler(0,SCHED_FIFO,&p);
	policy = sched_getscheduler(0);
	switch(policy){
	case SCHED_OTHER:
		printf("Other policy\n");
		break;
	case SCHED_FIFO:
		printf("Fifo policy\n");
		break;
	case SCHED_RR:
		printf("RR policy\n");
		break;
	}
	return 0;
}

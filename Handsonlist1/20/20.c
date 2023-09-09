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


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

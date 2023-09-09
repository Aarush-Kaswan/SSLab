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

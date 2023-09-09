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

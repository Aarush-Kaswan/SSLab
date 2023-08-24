#include<unistd.h>
#include<fcntl.h>
#include<stdio.h>
int main() {
	int fd = open("temp", O_RDWR);
	printf("%d\n", fcntl(fd,F_GETFL));
	
	return 0;
}

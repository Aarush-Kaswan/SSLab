#include<stdio.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
int main() {
	int fd = creat("myFile",S_IRUSR);
	printf("%d", fd);
	return 0;
}

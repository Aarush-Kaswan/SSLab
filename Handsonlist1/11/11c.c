#include<unistd.h>
#include<fcntl.h>
#include<stdio.h>
int main() {
	int fd = open("temp", O_RDWR);
	int duplicateFD = fcntl(fd, F_DUPFD, 10);

	write(fd, "Gaddari ",8 );
	write(duplicateFD, "karbe!!\n", 8);
	return 0;
}

#include<unistd.h>
#include<fcntl.h>
#include<stdio.h>
int main() {
	int fd = open("temp", O_RDWR);
	int duplicateFD = dup2(fd,5);

	write(fd, "Jaldi waha ",11 );
	write(duplicateFD, "se hato!!", 9);
	return 0;
}
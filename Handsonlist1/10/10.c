#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
void main(){
	int sourceFD = open("abc",O_RDWR);
	write(sourceFD,"abcdefghij",10);
	lseek(sourceFD,10,SEEK_CUR);
	write(sourceFD,"1234567890",10);
	int result = lseek(sourceFD,0,SEEK_CUR);
	printf("%d",result);
	return;
}

#include<stdio.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
int main (){
	int x = open("justafile.txt",O_RDWR);
//	int x = open("justafile.txt",O_EXCL | O_CREAT | O_RDWR, S_IRUSR);
	printf("%d",x);
	return 0;
}

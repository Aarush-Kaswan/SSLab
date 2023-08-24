#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
void main(){
	int sourceFD = open("abc",O_RDONLY);
	char arr[200];
	char c;
	int count = 0;
	int result = read(sourceFD,&c,1);
	while (result != 0) {
		while (c != '\n'){
			arr[count] = c;
			count++;
			result = read(sourceFD,&c,1);
		}
		arr[count++] = '\n';
		write(1,arr,count);
		count = 0;
		result = read(sourceFD,&c,1);
	}
	close(sourceFD);
	return;
}

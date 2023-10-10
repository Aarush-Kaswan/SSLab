/*
============================================================================
Name : 8.c
Author : Aarush Kaswan
Description : Write a program to open a file in read only mode, read line by line and display each line as it is read. Close the file when end of file is reached.
Date: 20th Aug, 2023.
============================================================================
*/
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

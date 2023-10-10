/*
============================================================================
Name : 7.c
Author : Aarush Kaswan
Description : Write a program to copy file1 into file2 ($cp file1 file2).
Date: 20th Aug, 2023.
============================================================================
*/
#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
void main(int argc, char *arr[]) {
	if(argc!=3){
		printf("Invalid Syntax");
		return;
	}
	int sourceFD = open(arr[1],O_RDONLY);
	int destFD = open(arr[2],O_WRONLY);
	char buff[1];
	int result = read(sourceFD,buff,1);
	while (result == 1) {
		write(destFD,buff,1); 
		result = read(sourceFD,buff,1);
	}
}

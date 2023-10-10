/*
============================================================================
Name : 4.c
Author : Aarush Kaswan
Description : Write a program to open an existing file with read write mode. Try O_EXCL flag also.
Date: 11th Aug, 2023.
============================================================================
*/
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

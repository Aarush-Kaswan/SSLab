/*
============================================================================
Name : 10.c
Author : Aarush Kaswan
Description : Write a program to open a file with read write mode, write 10 bytes, move the file pointer by 10 bytes (use lseek) and write again 10 bytes.
		a. check the return value of lseek
		b. open the file with od and check the empty spaces in between the data.
Date: 20th Aug, 2023.
============================================================================
*/
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

/*
============================================================================
Name : 6.c
Author : Aarush Kaswan
Description : Write a program to take input from STDIN and display on STDOUT. Use only read/write system calls
Date: 20th Aug, 2023.
============================================================================
*/
#include<stdio.h>
#include<unistd.h>
void main() {
	char arr[2];
	read(0,arr,2);
	write(1,arr,1);
}

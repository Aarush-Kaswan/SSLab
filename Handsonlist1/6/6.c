#include<stdio.h>
#include<unistd.h>
void main() {
	char arr[2];
	read(0,arr,2);
	write(1,arr,1);
}

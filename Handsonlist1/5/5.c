#include<stdio.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
int main() {
	int a = creat("file1",S_IRUSR);
	int b = creat("file2",S_IWUSR);
	int c = creat("file3",S_IXUSR);
	int d = creat("file4",S_IRGRP);
	int e = creat("file5",S_IWGRP);
	while(1);
	return 0;
}

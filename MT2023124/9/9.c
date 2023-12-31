/*
============================================================================
Name : 9.c
Author : Aarush Kaswan
Description : Write a program to print the following information about a given file.
		a. inode
		b. number of hard links
		c. uid
		d. gid
		e. size
		f. block size
		g. number of blocks
		h. time of last access
		i. time of last modification
		j. time of last change
Date: 20th Aug, 2023.
============================================================================
*/
#include <sys/types.h>
#include <sys/stat.h>
#include <time.h>
#include <stdio.h>
int main(int argc, char *argv[]) {
	struct stat sb;
        if (argc != 2) {
 	       printf("Invalid  File");
               return -1;
        }
        
        stat(argv[1], &sb);

	printf("I-node number: %d\n",(int) sb.st_ino);

        printf("No. of Hard Links: %d\n", (int) sb.st_nlink);

        printf("UID=%d\nGID=%d\n",(int) sb.st_uid, (int) sb.st_gid);

        printf("File size: %d bytes\n",(int) sb.st_size);
        
        printf("Block size: %d bytes\n",(int) sb.st_blksize);

        printf("Blocks allocated: %d\n",(int) sb.st_blocks);

        printf("Time of last access: %s", ctime(&sb.st_atime));

        printf("Time of last modification: %s", ctime(&sb.st_mtime));

        printf("Time of last change: %s", ctime(&sb.st_ctime));
        
        return 0;
}



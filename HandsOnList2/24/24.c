/*
============================================================================
Name : 24.c
Author : Aarush Kaswan
Description : Write a program to create a message queue and print the key and message queue id.
system call with FIFO.
Date: 9th Oct, 2023.
============================================================================
*/

#include<unistd.h>
#include<sys/ipc.h>
#include<sys/msg.h>
#include<stdio.h>

int main(void) {
    key_t key = ftok(".", 2);
    int msgid = msgget(key, IPC_CREAT | 0666);
    printf("Key: 0x%0x, msg-id: %d\n", key, msgid);

    return 0;    
}

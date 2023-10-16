/*
============================================================================
Name : 27b.c
Author : Aarush Kaswan
Description : Write a program to send messages to the message queue. Check $ipcs -q
Date: 6th Oct, 2023.
============================================================================
*/

#include<unistd.h>
#include<sys/ipc.h>
#include<sys/msg.h>
#include<stdio.h>

int main(void) {
    struct msg {
        long mtype;
        char mtext[20];
    } mq;
    key_t key = ftok(".", 2);
    int msgid = msgget(key, IPC_CREAT | 0666);

    printf("Enter msg type: ");
    scanf("%ld", &mq.mtype);
    msgrcv(msgid, &mq, sizeof(mq.mtext), mq.mtype, 0);
    printf("Message : %s", mq.mtext);

    return 0;
}

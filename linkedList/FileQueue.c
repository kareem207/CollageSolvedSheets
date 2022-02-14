#include "FileQueue.h"
#include <stdio.h>
#include <stdlib.h>


void createQueuee(QueueType *q){
    q->Qfront=NULL;
    q->Qrear=NULL;
    q->Qsize=0;
}

void enQueue(QueueType *q,int num){

    Node *newNode = (Node*)malloc(sizeof(Node));
    newNode->data = num;
    newNode->nextPtr = NULL;

    if ( q->Qsize==0 ){
        q->Qfront = newNode;
        q->Qrear = newNode;
    }
    else {
    newNode->nextPtr = q->Qrear;
    q->Qrear = newNode;
    }
    q->Qsize++;




}

int deQueue(QueueType *q){

    Node *temp = q->Qfront;
    q->Qfront = q->Qfront->nextPtr;
    q->Qsize--;

}

void loopELm (QueueType q){
QueueType *qq = &q;
while (qq->Qsize >=0){
    int data = qq->Qfront->data;
    printf("%d ",data);
    qq->Qfront=qq->Qfront->nextPtr;
}


}

int firstElm(QueueType *q){return q->Qfront->data; }
int lastElm(QueueType *q){return q->Qrear->data; }
int sizeQueue(QueueType *q){return q->Qsize; }

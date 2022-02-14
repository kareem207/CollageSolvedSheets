#ifndef FILEQUEUE_H_INCLUDED
#define FILEQUEUE_H_INCLUDED

typedef struct {

    int data;
    struct Node *nextPtr;
}Node;

typedef struct{
    Node *Qrear;
    Node *Qfront;
    int Qsize;
}QueueType;

void createQueuee(QueueType *q);
void enQueue(QueueType *q,int num);
void copyQueue(QueueType *oldQueue,QueueType *newQueue);
int deQueue(QueueType *q);
void checkEven (QueueType q);
int firstElm(QueueType *q);
int lastElm(QueueType *q);
int sizeQueue(QueueType *q);
void loopELm (QueueType q);






#endif // FILEQUEUE_H_INCLUDED

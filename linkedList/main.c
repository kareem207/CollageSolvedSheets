#include <stdio.h>
#include <stdlib.h>
#include "FileQueue.c"




int main (){

QueueType q1;

createQueuee(&q1);
enQueue(&q1,9);
enQueue(&q1,5);
enQueue(&q1,6);
enQueue(&q1,88);
loopElm(q1);
printf("The First Elm is =%d\nThe last Elm is =%d\nThe Size of the queue is =%d", firstElm(&q1),lastElm(&q1),sizeQueue(&q1));


return 0;}

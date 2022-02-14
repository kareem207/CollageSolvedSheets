
#include <stdio.h>
#include <stdlib.h>
#include "myFile.h"

void intionlize(listType *List){
    List->myPtr=NULL;
    List->sizeS=0;
}

void pushNode(listType *List,int num){
    Node *newNode;
    if(List->myPtr==NULL){
        newNode =(Node *)malloc(sizeof(Node));
        newNode->data = num;
        newNode->nextPtr = NULL;
        List->myPtr= newNode;
        List->sizeS++;
    }

    else {
        newNode =(Node *)malloc(sizeof(Node));
        newNode->data = num;
        newNode->nextPtr = List->myPtr;
        List->myPtr= newNode;
        List->sizeS++;
    }
}

int popNode(listType *List){
        Node *temp = List->myPtr;
        int tempo = temp->data;
        temp = temp->nextPtr;
        //free(temp);
        List->sizeS--;
        return temp->data;
}

int sizeNode(listType *List) {return List->sizeS;}

int lastElment(listType *List) {

    Node *ptr = List->myPtr;
    return ptr->data;
    }

int addLists(listType *List1, listType *List2){

    Node *currentPtr=List1->myPtr ;
    while(currentPtr != NULL){
        printf("Im in the loop\n");

        Node *newNode = (Node*)malloc(sizeof(Node));
        newNode->nextPtr = List2->myPtr;
        List2->myPtr = newNode;
        newNode->data = currentPtr->data;
        currentPtr = currentPtr->nextPtr;
        List2->sizeS++;

    }

}

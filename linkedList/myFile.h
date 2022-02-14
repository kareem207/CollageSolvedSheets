#ifndef MYFILE_H_INCLUDED
#define MYFILE_H_INCLUDED

typedef struct {
    int data;
    struct Node *nextPtr;
}Node;

typedef struct {
    struct Node *myPtr;
    int sizeS;
}listType;

void intionlize(listType *List);
void pushNode(listType *List,int num);
int popNode(listType *List);
void showData(listType *List);



#endif // MYFILE_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include "treeTry.h"


void initialize(treePtr *t){ *t=NULL;}

void insertLeaf(treePtr *t , entryType data){

    Tree *newLeaf = (Tree*)malloc(sizeof(Tree));
    newLeaf->left=NULL; newLeaf->right=NULL;
    newLeaf->value = data;

    if(*t == NULL) {
            *t=newLeaf;}
    else {
        Tree *cur,*pre;
        cur = *t;
        while(cur!=NULL){
            pre=cur;
            if( cur->value > data ) cur = cur->left;
            else cur = cur->right;
        }
        if(pre->value > data) pre->left = newLeaf;
        else pre->right = newLeaf;
    }


}

void inorder(treePtr t){
    if(t!=NULL){
        inorder(t->left);
        printf("%d ",t->value);
        inorder(t->right);
    }
    return;
}


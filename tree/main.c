#include <stdio.h>
#include <stdlib.h>

typedef int entrytype;

typedef struct Leaf{
entrytype data;
struct Leaf *left;
struct Leaf *right;
}leaf;

typedef leaf *treeRoot;

void create(treeRoot *t){*t=NULL;}

void addElm(treeRoot *t, entrytype data){

    leaf *newLeaf = (leaf*)malloc(sizeof(newLeaf));
    newLeaf->data=data;
    newLeaf->left=NULL;    newLeaf->right=NULL;

    if (*t==NULL) *t=newLeaf;
    else {
        leaf *cur,*pre;
        cur = *t;
        while(cur!=NULL){
            pre=cur;
            if(data > cur->data) cur=cur->right;
            else cur=cur->left;
        }
        if(data > pre->data ) pre->right = newLeaf;
        else pre->left = newLeaf;


    }
}

void inOrder (treeRoot t){

    if(t!=NULL){
        inOrder(t->left);
        printf("%d ",t->data);
        inOrder(t->right);
    }

}

int sizee (treeRoot t){
if (t==NULL) return 0;
return (1+sizee(t->left)+sizee(t->right));

}

int deepth (treeRoot t){

if(t==NULL) return 0;

int a = deepth(t->left);
int b = deepth(t->right);
return (a>b) ? a+1 : b+1;
}
clearTree (treeRoot *t){

    if(*t!=NULL){
        clearTree(&(*t)->left);
        clearTree(&(*t)->right);
        free(*t);
        *t = NULL;
    }

}
int main(){
    treeRoot t;
    create(&t);
    addElm(&t,5);
    addElm(&t,2);
    addElm(&t,1);
    addElm(&t,6);
    addElm(&t,8);
    addElm(&t,4);

    inOrder(t);

    printf("Hello world !\n");
    printf("%d \n",sizee(t));
    printf("%d \n",deepth(t));
    return 0;
}


#include "stdio.h"
#define LENGTH 100
typedef char datatype;

typedef  struct node{
    datatype data;
    int lchild , rchild;
    int parent;
}Node;

Node tree[LENGTH];
int length;
int root;

typedef struct BinNode{
    datatype data;
    struct BinNode* lchild;
    struct BinNode* rchild;
}BinNode;

typedef BinNode* bintree;

//  preorder about a tree
void preorder(bintree t){
    if(t){
       printf(" %c\n",t->data);
       preorder(bintree t);
       preorder(bintree t);
    }
}



// use the usual way to travel
// to do a seqstack to  store  data
#define SIZE 100

typedef struct seqstack{
     bintree data[SIZE];
     int tag[SIZE];
     int top ;
}seqstack;

void push (seqstack *s ,bintree t){

      if (s->top ==SIZE) {
        printf("the statck is full\n", );
      }else{
        s->top++;
        s->data[s->top] =t;
      }
}





void  mian() {

}

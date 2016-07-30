
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


//  preorder about a tree and the others just change the sequence
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

bintree pop(seqstack *s){
    if(s->top ==-1){
      return NULL;
    }else{
      s->top--;
      return s->data[s->top+1];
    }
}


// 1.preorder_dev
void preorder_dev(bintree tree){
    seqstack s;
    s.top =-1;
    if (!t) {
      printf("the tree is empty\n", );
    }else{
       while (t||s.top!=-1) {
         while (t ) {
           printf(" %c\n",t->data  );
           push(&s, t );
           t =t->lchild;
         }
         t =pop(&S );
         t =t ->rchild;
       }
    }

}

// 2. mideorder
void mideorder(bintree tree){
    seqstack s ;
    s.top =-1;
    if(!tree){
         printf(" the tree  is empty\n");
    }else{
       while (tree||s.top!= -1) {
            while (tree ) {
              push(&s ,tree );
              t=t->lchild;
            }
            tree= pop(&s);
            printf(" %c\n",tree->data );
            tree =tree->rchild;
        }
      }
}

//3. postorder
void postorder_dev(bintree tree){
  seqstack s ;
  s.top =-1;
  if(!tree){
     printf(" the tree is empty\n" );
     
  }

}

void  mian() {

}

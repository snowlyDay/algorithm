
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
  }else{
     while (tree ||s.top!=-1) {
       while (tree)  {
          push(&s,tree) m;
          s.tag[s.top]=0;
          tree=tree->lchild;
       }
       if(s.tag[s.top]==0){
         tree= s.data[s.top];
         s.tag[s.top]=1;
         tree=tree->rchild;
       }else{
          while (s.tag[s.top]==1) {
            tree =pop(&s);
            printf("%c\n",tree->data );
          }
          tree =NULL;
       }
     }
  }

}

// a seqqueue for cengci travel
// define a seqqueue
#define MAX 1000

typedef  struct seqqueue{
  bintree data[MAX];
  int front;
  int rear;
}seqqueue;

void enter(seqqueue *q,bintree t){
  if(q->rear=MAX){
    printf("the queue is full!\n" );
  }else{
      q->data[q->rear]=t;
      q->rear++;
  }
}

bintree del(seqqueue *q){
  if (q->front==q->rear) {
    return NULL;
  }else{
     q->front++;
     return q->data[q->front-1];
  }
}

// code : level tree
void level_tree(bintree tree){
    sequence q;
    bintree temp;
    q.front=q.rear=0;
    if (!tree) {
      printf("the tree is emp\n", );
    }
   enter(&q,tree);
   while (q.front!=q.rear) {
     t=del(&q);
     printf("%s\n", tree->data);
     if (tree->lchild) {
       enter(&q,tree->lchild);
     }
     if (tree->rchild) {
       enter(&q,tree->rchild);
     }
   }
}


//use  preorder esult to rebuild a tree
void createTree(bintree *t){
   datatype c;
   if((c=getchar())=='#'){
     *t =NULL;
   }else{
     *t =(bintree)malloc(sizeof(BinNode));
     (*t)->data=c;
     createTree(&(*t)->lchild);
     createTree(&(*t)->rchild);
   }
}


//======================================================

bintree search_tree(bintree t ,datatype x){
   if(!t){
      return NULL;
   }
   if(t->data== x){
     return t;
   }else{
     if(!search_tree(t->lchild,x )){
        return search_tree(t->rchild,x);
     }
     return t;
   }
}

int count_tree(bintree t){
   if(t){
      return (count_tree(t->lchild)+ count_tree(t->rchild)+1);

   }
   return 0;
}


int is_equal (bintree t1, bintree t2){
   if(!t1&&!t2){
      return 1;
   }
   if(t1&&t2&&t1->data== t2->data){
      if(is_equal(t1->lchild,t2->lchild))
        if(is_equal(t1->rchild,t2->rchild)){
           return 1;
        }
   }
   return 0;
}


int hight_tree(bintree t){
   int h, left ,right;
   if(!t){
      return 0;
   }
   left = hight_tree(t->lchild);
   right =hight_tree(t->rchild);
   h =(left>right?left:right)+1;
   return h;
}




void  mian() {

}

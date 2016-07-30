#include "stdio.h"
#define LENGTH 100
typedef char datatype;

typedef struct node{
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


void  mian() {

}

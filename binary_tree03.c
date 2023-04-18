#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *right;
    struct node *left;
};
struct node *create(){
    struct node *newnode;
    newnode=(struct node*)malloc (sizeof(struct node));
    int x;
    printf("enter the data(-1 for nop node)");
    scanf("%d",&x);
    if(x==-1){
        return 0;
    }
    newnode->data=x;
    printf("enter the value of left child %d",x);
    newnode->left=create();
    printf("enter the value of right child %d",x);
    newnode->right=create();
    return newnode;
}

void main(){
    struct node *root;
    root= 0;
    root= create();

// return 0;
}
#include<stdio.h>
#include <stdlib.h>
struct node{
int data;
struct node *left,*right;
};
struct node *create(){
int x;
struct node *newnode;
newnode=(struct node*)malloc(sizeof(struct node));
printf("enter the data (-1 for no node):: ");
scanf("%d",&x);
if(x==-1){
    return 0;
}
newnode->data=x;
printf("enter the left child of %d",x); 
newnode->left=create();
printf("enter the right child of %d",x);
newnode->right=create();
return newnode;
}
void preorder(struct node *root){
    if (root==NULL){
        return;
    }
    printf("%d",root->data);
    preorder(root->left);
    // printf("%d",root->data);
    preorder(root->right);
}
void postorder(struct node *root){
    if(root==NULL){
        return;
    }
    postorder(root->left);
    postorder(root->right);
    printf("%d",root->data);
}
void main(){
struct node *root;
root=0;
root=create();
printf("preorder is:: ");
preorder(root);
printf("postorder is ::");
postorder(root);
// return 0;
}
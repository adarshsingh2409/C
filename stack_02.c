#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *link;
};
struct node *top=NULL;
void push(int x){
    struct node *newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=x;
    newnode->link=top;
    top=newnode;
}
void display(){
    struct node *temp;
    temp=top;
    if (top==NULL){
        printf("ovrflow");
    }
else{
    while(temp!=NULL){
        printf("%d",temp->data);
        temp=temp->link;
    }
}
}
int main(){
 push(5);
display();
return 0;
}
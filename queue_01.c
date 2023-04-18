#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node *front=NULL;
struct node *rear=NULL;
void enqeue(int x){
struct node *newnode , *temp;
newnode=(struct node*)malloc(sizeof(struct node));
newnode->data=x;
newnode->next=NULL;
if(rear==NULL && front == NULL){
    front=rear=newnode;
}
else{
    rear->next=newnode;
    rear=newnode;
}
}
void display(){
     struct node *temp;
    if(front==NULL&& rear==NULL){
        printf("queue is empty");
    }
    else{
        temp=front;
        while (temp!=0){
            printf("%d",temp->data);
            temp=temp->next;
        }
    }
}
int main(){
enqeue(5);
enqeue(8);
display();
return 0;
}
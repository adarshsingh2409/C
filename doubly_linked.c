#include<stdio.h>
#include<stdlib.h>
struct node
{
 int data;
 struct node *next;
 struct node *prev;
 };
 struct node *head=NULL, *newnode, *temp;
 void create(){
     
     int n;
     printf("Enter no. of node want to create:: ");
     scanf("%d",&n);
     for(int i=0; i<n; i++){
         newnode=(struct node*)malloc(sizeof(struct node));
         printf("ENTER DATA  ");
         scanf("%d",&newnode->data);
         newnode->next=NULL;
         newnode->prev=NULL;
         if(head==NULL)
         {
             head=temp=newnode;
         }
         else{
             temp->next=newnode;
             newnode->prev=temp;
             temp=temp->next;
         }
            }
 }
 void display(){
     temp=head;
     while(temp!=NULL){
         printf("%d ",temp->data);
         temp=temp->next;

     }
 } 
 void insertion_beg(){
     newnode=(struct node*)malloc(sizeof(struct node));
     printf("\nENTER NEW DATA:: ");
     scanf("%d",&newnode->data);
    //  newnode->next=NULL;
    //  newnode->prev=NULL; THIS LINE ARE USELESS

     newnode->next=head;
     head->prev=newnode;
     head=newnode;
 }

int main(){
    create();
    display();
    insertion_beg();
    display();

return 0;
}
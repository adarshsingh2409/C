#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};
struct node *newnode, *temp ,*head=NULL;
void create(){
    int n;
    printf("enter the no. of node s yu want yu create");
    scanf("%d",&n);
for(int i=0;i<n;i++){
newnode=(struct node*)malloc(sizeof(struct node));
printf("enter the data");
scanf("%d",&newnode->data);
newnode->next=0;
if(head ==0){
    head = temp=newnode;
    }
    else{
        temp->next=newnode;
        temp=newnode;   
    }
    }
   
}
void display()
{
    temp=head; 
    while(temp!=NULL)
    {

    printf("%d",temp->data);
     temp = temp->next;

}

}
int main()
{

create();
display();

    return 0;
}

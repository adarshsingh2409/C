// #include<stdio.h>
// #include<stdlib.h>
// struct node {
//     int data;
//     struct node *next;
// };
// struct node *newnode, *head=NULL, *temp,*temp1;
// void create(){

// int n;
// printf("Enter the number of node you want to create:: ");
// scanf("%d",&n);
// for(int i=0;i<n;i++)
// {
//  newnode= (struct node*) malloc(sizeof(struct node));
// printf("Enter the data:: ");
// scanf("%d", &newnode->data);
// newnode->next=0;
// if(head == NULL){
//     head = temp = newnode;
// }
// else{
//     temp-> next=newnode;
//     temp = newnode;
//  }
 
//  }
//   }
//   void insertionatbeging(){
     
       
//        newnode = (struct node*) malloc(sizeof(struct node));
//        printf("\nEnter new data :: ");
//        scanf("%d",&newnode->data);
//         newnode->next=NULL;

//        newnode->next=head;
//        head=newnode;
       
//        }
//        void insert_at_end(){
//          newnode = (struct node*)malloc(sizeof(struct node));
//          printf("\nEnter the new DATA:: ");
//          scanf("%d",&newnode->data);
//          newnode->next=NULL;
//         temp=head;
//         while(temp->next!=NULL){
//             temp=temp->next;
//         }
//         temp->next=newnode;

         
//        }
     
   
//   void display(){
//       temp=head;
//       while(temp!=NULL){
//           printf("%d  ",temp-> data);
//           temp=temp->next;
          
//       }
//   }
//  void del_beg()
//  {
//      temp1=head;
//      head=head->next;
//      free(temp1);
//  } 
//  void del_at_end()
//  {
//   temp1=head->next;
 
//  temp=head;

//  while(temp1->next!=NULL){
    
//      temp1=temp1->next;
//     temp=temp->next;
//  }
//  temp->next=NULL;
//   free(temp1);

//  }
 
// int main(){
 
  
//        create();
//         display();
//   insertionatbeging();
//   insert_at_end();
//   display();
//   del_beg();
//  del_at_end();

//  display();
 
// return 0;
// }

#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node *temp,*newnode, *head=NULL;
void create(){
    int X,i;
    printf("No. of element you want to create");
    scanf("%d",&X);
    for(i=0;i<X;i++){
newnode=(struct node*) malloc(sizeof(struct node));
printf ("enter data::");
scanf("%d",&newnode->data);
newnode->next=NULL;
if(head==NULL){
    
    head=temp=newnode;
}
else{temp->next=newnode;
temp=newnode;
}}}
void display(){
   temp= head;
   while(temp!=NULL){
       printf("%d",temp->data);
       temp=temp->next;
   }
}
void insert_beg(){
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("enter new data");
    scanf("%d",&newnode->data);
    newnode->next=NULL;
    newnode->next=head;
    head=newnode;
}
void insert_end(){
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("enter the data");
    scanf("%d",&newnode->data);
    newnode->next=NULL;
    temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=newnode;
}
int main(){
 create();
 display();
//   insert_beg();
//   display();
insert_end();
display();
return 0;
}
#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node*next;
};
void linkedlistTraversal(struct Node*ptr);
     {
         while(ptr!=NULL){
             printf("Element : %d\n", ptr->data);
             ptr = ptr->next;
         }


     }
struct Node*insertionatfirst(struct Node *head,int data){
    struct Node * ptr =(struct Node *)malloc(sizeof(struct Node));
      ptr->data=data;
    ptr->next= head;
  
    return ptr;

    int main()
    {
        struct Node *head;
        struct Node *second;
        struct Node *third;
    
    head=(struct Node*)malloc(sizeof(struct Node));
    second=(struct Node*)malloc(sizeof(struct Node));
    third=(struct Node*)malloc(sizeof(struct Node));
    
    head->data = 5;
    head-> next =second;
    
    second->data=9;
    second->next = third;

    third-> data= 4;
    third-> next = NULL;
    
     linkedlistTraversal(head);
    head = insertionatfirst(head,56);
    linkedlistTraversal(head);

return 0;
}




// INSERTION WITH THE HELP OF ARRAY..
#include<stdio.h>
#define N 5
int queue[N];
int front=-1;
int rear=-1;
void enqueue(int x){
    if (rear==N-1){
        printf("OVERFLOW");
    }  
    else if (rear==-1 && front==-1){
        front = rear=0;
        queue[rear]=x;
    }
    else {
        rear++;
        queue[rear]=x;
    }
}
void dequeue(){
    if(front==-1 && rear == -1){
        printf("UNDERFLOW");
    }
    else if(front == rear){
        front = rear=-1;
    }
    else{
        printf("\nTHE DEQUEUE ELEMENT IS :: %d\n",queue[front]);
        front++;
       
    }
}
void display(){
    if(front==-1 && rear==-1){
        printf("EMPTY");
    }
    else{
        for(int i=front;i<rear+1;i++){
            printf("%d",queue[i]);
        }
    }
}
int main(){
    enqueue(5);
    enqueue(3);
    enqueue(2);
    display();
    dequeue();
    // dequeue();
     dequeue();
     display();
    
return 0;
}
// CIRCULAR QUEUE USING ARRAY
#include<stdio.h>
#define N 5
int queue[N];
int front=-1;
int rear= -1;
void enqueue(int X){
    if (front==-1 && rear==-1){
    front=rear=0;
    queue[rear]=X;
    }
    else if((rear+1)%N)==front){
        printf("queue is full");
    }
}
int main(){

return 0;
}
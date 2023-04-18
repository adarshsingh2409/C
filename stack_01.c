#include<stdio.h>
#define N 5
int stack[N];
int top=-1;
void push(){
   for(int i=0;i<N;i++){
   int x;
    printf("ENTER DATA:: ");
    scanf("%d",&x);
    if(top==N-1){
        printf("OVERFLOW");
    }
    else{
        top++;
        stack[top]=x;
    }
}
}
void pop(){
    int item;
    if(top==-1){
        printf("UNDERFLOW");
    }
    else{
        item=stack[top];
        top--;
        printf("\n%d",item);
    }
}
void peek(){
    if(top==-1){
        printf("EMPTY");
    }
    else{
        printf("\n%d",stack[top]);
    }
}
void display(){
    
    for(int i=top;i>=0;i--){
        printf("%d\n",stack[i]);
    }
}
int main(){
   push();
    // pop();
   
    // display();
    //  pop();
    //  peek();
     display();
return 0;
}
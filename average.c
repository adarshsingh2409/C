#include<stdio.h>
float average (int a,int b,int c);
int main(){
int x,y,z;
printf("enter the first number\n");
scanf("%d",&x);
printf("enter the second number\n");
scanf("%d",&y);
printf("enter the value of third number\n");
scanf("%d",&z);

printf("the average is %f\n",average(x,y,z));
return 0;
}
float average (int x, int y, int z){
   float average;
    average = (float)(x+y+z)/3;
    return average; 
}

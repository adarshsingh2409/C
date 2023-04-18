#include<stdio.h>

int main(){
int a[50],i,pos, size,  num;
printf("enter the size of array ::  ");
scanf("%d", &size);
printf("enter the pos where user want to add new number:: ");
scanf("%d",&pos);
printf("enter the number user want to add::  ");
scanf("%d",&num);
printf("enter the element of array\n");
for(i=0;i<size;i++){

scanf("%d",&a[i]);

}   
for(i=size-1; i>=pos-1;i--)
{
    a[i+1]=a[i];
}
a[pos-1]= num;
size++;
printf("the insertion matrix is \n");

for(i=0;i<size;i++){
printf("%d",a[i]);
}

return 0;
}
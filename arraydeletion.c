#include<stdio.h>

int main(){
int a[50],pos,size,i;
printf("enter the size of array : ");
scanf("%d",&size);

printf("enter the element of array\n");
for(i=0; i<size;i++){
    scanf("%d",&a[i]);
}
printf("enter the position from where user want to delete the number");
scanf("%d",&pos);
for(i=pos-1;i<size;i++){
    a[i]=a[i+1];
}
size--;
printf("the mateix is");
for(i=0; i<size;i++){
    printf("%d\n",a[i]);
}
return 0;
}

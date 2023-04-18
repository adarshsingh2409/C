#include<stdio.h>

int main(){
int a[50], pos,size,i,num;
printf("enter the size ");
scanf("%d", &size);
printf("enter  the pos");
scanf("%d",&pos);
printf("enter the num you want to print ");
scanf("%d",&num);
printf("enter the element of array");
for(i=0; i<size; i++){
    scanf("%d",&a[i]);
}
for(i=size-1;i>=pos-1;i--){
a[i+1]=a[i];
}
a[pos-1]=num;
size++;

printf("the array is ");
for(i=0; i<size;i++){
    printf("%d", a[i]);

}
// for(i=size-1;i>pos-1;i--){
// a[i+1]=a[i];
// }
return 0;
}

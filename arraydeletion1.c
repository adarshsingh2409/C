// #include<stdio.h>

// int main(){
// int a[50],i,pos,size;
// printf("enter size:: ");
// scanf("%d",&size);
// printf("enter element of array");
// for(i=0;i<size;i++)
// {
//     scanf("%d",&a[i]);

// }
// printf("enter the position:: ");
// scanf("%d", &pos);
// // printf("enter the number ");
// for(i=pos-1;i<size;i++)
// {
//     a[i]=a[i+1];
// }size--;
// printf("the new array after the deletion is\n");
// for(i=0;i<size;i++){
//     printf("%d",a[i]);
// }
// return 0;
// }
#include<stdio.h>
int main()
{
    int a[20],size,pos,i,item;
    printf("Enter the size of array");
    scanf("%d",&size);
    printf("Enter the element in array");
    for (i=0;i<size;i++){
        scanf("%d",&a[i]);
    }
    printf("from which position u want delete");
    scanf("%d",&pos);
    if (pos <=0 || pos >size ){
        printf("invalid pos");
    }
    else 
    item = a[pos-1];
    for (i = pos-1 ;i<size-1;i++){
        a[i]=a[i+1];
    }
    size--;
     for (i=0;i<size;i++){
         printf("%d",a[i]);
     }
    return 0;
}
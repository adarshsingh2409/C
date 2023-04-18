// // it execute the code and then chek the condition........
// #include<stdio.h>

// int main(){
// int i=0;
// int n;
// printf("enter the value of n \n");
// scanf("%d", &n);
// do { 
//     printf("the number is %d\n " , i++);

// i++;



// } while (i<n);
// return 0;
// }
#include<stdio.h>

int main(){
int i=0;
int n;
printf("enter the value of n\n" );
scanf("%d" , &n);

do{
    printf("the number is %d\n" , i);
    i++;
    if(i==5){
        printf("the number is 5 \n");
    }
}while(i<n);

return 0;
}
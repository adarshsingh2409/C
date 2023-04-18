// syntax ::    for(initialize; test; increment or decrement)
// {
//     //code;
//     //code;
//     //code;
// }
#include<stdio.h>

int main(){ int n;
//  for(int a=0; a<10; a++){
//      printf("the value of a is %d\n" , a+1);
//  }
printf("enter the value of n \n");
scanf("%d" , &n);
for(int i=n ; i ; i--){
    printf(" the value of n is %d \n" , i);
}
return 0;
}
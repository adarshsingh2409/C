#include<stdio.h>

int main(){
int i=45;
// int *j = &i;
int *j=&i;
printf("address of i is %u\n",&i);
printf("%d\n",*j);
printf("address of j is %u\n", &j);
return 0;
}
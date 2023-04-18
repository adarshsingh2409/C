#include <stdio.h>
int main()
{ int a,b,c;
printf("enter the value of a \n");
scanf("%d" , &a);

printf("enter the value of b \n");
scanf("%d" , &b);

printf("enter the value of c\n");
scanf("%d" , &c);

printf(" subtract c from the sum of a and b is %d ", a+b-c);
return 0;
}
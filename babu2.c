#include<stdio.h>
#include <math.h>
int main(){
int n,i,j,s=0,F=1;
printf("enter no. of term");
scanf("%d" , &n);
for(i=1 ; i<=n; i++)
{
    for(j=1 ;j<=i; j++)
    {
        F= F*j;
    }
    s=s+pow(n,i)/F;
    F=1;
}
printf("%d is sum " , s);
return 0;
}
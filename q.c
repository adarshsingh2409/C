// #include<stdio.h>

// int main(){
// int X;
// printf("enter the number : X\n");
// scanf("%d",&X);
//  printf("the divisibility result is :%f \n",X%5);
// return 0;
// }

#include<stdio.h>
#include<math.h>
int main()
{
    int n,pr,l1;
    char A[10];
    printf("size of array :\n");
    scanf("%d",&l1);
    printf("elements are \n");
    pr = pow(2,l1) ;
    for (int i=0;i<l1;i++)
    {
    scanf("%s",&A[i]);
    }
    printf("number of power set : %d\n",pr);
    printf("sets are\n");
    for (int i=0;i<pr;i++)
    {
        printf("{");
        for (int j=0;j<l1;j++)
        {
          if(i&1<<j)
          {
            printf("%c",A[j]);
          }
        }
        printf("}");
        printf("\n");
    }
    return 0;
}

#include<stdio.h>

int main(){
int a[2][2],b[2][2], c[2][2],i,j;
 printf("enter the matrix a elements ");
 for(i=0;i<2; i++)
{
  for(j =0; j<2 ;j++)
   {
         scanf("%d", &a[i][j]);
   }
}
//  printf(" matrix elements\n");
//  for(i=0;i<2; i++)
//  {
//         for(j =0; j<2 ;j++)
//         {
//            printf("%d ", a[i][j]);
//         }
 
//      printf("\n");


 printf("enter the matrix b elements ");
 for(i=0;i<2; i++)
{
  for(j =0; j<2 ;j++)
   {
         scanf("%d", &b[i][j]);
   }
}
 for(i=0;i<2; i++)
{
  for(j =0; j<2 ;j++){
      c[i][j]=a[i][j]*b[i][j];
  }}
  for(i=0;i<2; i++)
{
  for(j =0; j<2 ;j++){
  printf("%d",c[i][j]);
  } 
  printf("\n") ;
  }  
//  printf(" matrix elements\n");
//  for(i=0;i<2; i++)
//  {
//         for(j =0; j<2 ;j++)
//         {
//            printf("%d ", b[i][j]);
//         }
 
//      printf("\n");
 return 0;
}
// #include<stdio.h>

// int main(){
// int a[3][3][3], i , j, k;
// printf("enter the the value of array\n");
// for(i=0; i<3;i++){
//     for(j=0;j<3; j++){
//         for(k=0;k<3;k++){
//             scanf("%d" , &a[i][j][k]);
//         }
//     }
// }
// printf("the array is \n");
// for(i=0; i<3;i++){
//     for(j=0;j<3; j++){
//         for(k=0;k<3;k++){
//             printf("%d  " , a[i][j][k]);
//         }
//     }
// printf("\n");
// }
// return 0;
// }
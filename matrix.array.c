#include<stdio.h>

int main(){
int a[10][10],b[10][10],c[10][10], i,j,k,l;
int n,m,x,y;

printf("enter the row AND COLOum of 1ST MATRIX");
scanf("%d", &n);
scanf("%d",&m);
printf("enter the row AND COLOum of 2ST MATRIX");
scanf("%d", &x);
scanf("%d",&y);
printf ("enter the value  of 1 st matrix ");
for(i=0;i<n;i++){
    for(j=0;j<m;j++){
        scanf("%d",&a[i][j]);
        //scanf("%d",&a[j]);
    }

}printf ("enter the value  of 2 st matrix ");
for(i=0;i<x;i++){
    for(j=0;j<y;j++){
        scanf("%d",&b[i][j]);
       // scanf("%d",&b[j]);
    }

}if(m==x)
c[i][j]=0;
{
for(i=0;i<n;i++){
    for(j=0;j<y;j++){
c[i][j]=a[j][i]*b[i][j];
    


}}}
else 
printf("not valid ");
for(k=0;k<n;k++){
    for(l=0;l<y;l++){
        printf("%d%d",c[k][l]);
    }}
return 0;
}
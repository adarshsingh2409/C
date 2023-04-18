#include<stdio.h>

int main(){
int a[3][3], i ,j;
printf("enter the element of array1\n");
for(i=0;i<3;i++){
    for(j=0;j<3;j++){
        scanf("%d",&a[i][j]);
    }
}
printf("array 1 is \n");
for(i=0;i<3;i++){
    for(j=0;j<3;j++){
        printf("%d ",a[i][j]);
    }
    printf("\n");
}
int b[3][3];
printf("enter the element of  array2\n");
for(i=0;i<3;i++){
    for(j=0;j<3;j++){
        scanf("%d",&b[i][j]);
    }
}
printf("array 2 is \n");
for(i=0;i<3;i++){
    for(j=0;j<3;j++){
        printf("%d ",b[i][j]);
    }
    printf("\n");
}
int c[3][3],X;
c[3][3]=X;
X=a[3][3]+b[3][3];
printf("%d",X);
return 0;
}
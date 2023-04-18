// #include<stdio.h>
// int product(int x , int y);
// int main(){ int a, b , c;
// printf("Enter the value of a and b \n");
// scanf("%d %d" , &a, &b);
// c =product ( a,b); 
// printf("product is %d" , c);
// return 0;
// }
// int product( int x, int y){
//     int c;
//     c=x*y;
//     return (c);
// }
#include<stdio.h>
int factorial(int x);

int main(){
    int a = 5;
    printf("The value of factorial %d is %d", a, factorial(a));
    return 0;
}

int factorial(int x){
    printf("Calling factorial(%d)\n", x);
    if (x==1 || x==0){
        return 1;
    }
    else{
        return x * factorial(x-1);
    }
}
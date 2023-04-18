#include<stdio.h>
int area(int a, int b);
int main(){int answer;
answer = area(2,2);
printf("the area is %d\n" , answer);

return 0;
}
int area (int a , int b){
    int c;
    c=a*b;
    return c;
}
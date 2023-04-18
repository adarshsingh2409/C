#include<stdio.h>

int main(){
int a =1;
while (a<=20){
    if (a>=10)
    {
        printf("the  first ten natural no b/w 10 to 20 is %d\n" , a);
    } else {
        printf("this no. is not b/w 10 to 20 %d\n" , a);
           }a++;
}
return 0;
}
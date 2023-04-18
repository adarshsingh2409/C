#include<stdio.h>

int main(){
int age;
int vippass = 0; 
int vippass = 1;
// int vippass=0;
printf("enter your age \n");
scanf("%d", &age);
if(age<=60 && age >= 18)
{ printf("you are elligle for driving\n");

}
else{
    printf("you are not elligible for driving");
}
return 0;
}
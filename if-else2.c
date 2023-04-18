#include <stdio.h>
int main()
{
    int age;
    printf("enter your age : \n");
    scanf("%d" , &age);
     if ( age<=60){
         printf("you are elligble for driving \n");
         }
else{
    printf("you are not elligble for driving\n");
}
if(age==18){printf("you can vote\n");
}
// else {printf(" you are elligble for driving\n");
// }
return 0;
}
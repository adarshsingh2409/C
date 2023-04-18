#include<stdio.h>
 
float circle( int r);
int main(){
    float area;
    area = circle(4);
printf("the  area of cicle is %f" , area);
return 0;
}
float circle(int r){
    float area;
     area = 3.14*r*r;
return area;
}
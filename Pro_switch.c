// // #include<stdio.h>

// // int main(){
// // int a =10;
// // if (a==10){
// //     printf(" i am 10 year old\n");

// // }
// // else {
// //     printf("i am not 10 year old\n");
// // }
// // return 0;
// // }
// // QUESTION 2: chapter 3npractice set
// #include<stdio.h>

// int main(){
// int phy, math,chem;
// float total;
// printf ("enter your phy marks\n");
// scanf("%d" , &phy);
// printf("enter the chem marks\n");
// scanf("%d" ,  &chem);

// printf("enter the math marks\n");
// scanf("%d" , &math);

// total = ( phy+ math+ chem)/3;
// if((total<40) || phy<33 || math<33 || chem<33 ){
//     printf("youre total percentage is %f and you are fail\n" , total);
// }
// else {
//     printf(" your total percentage is %f and you are pass\n" , total);
// }

 
// return 0;
// }  


// QUESTION : FIND WHETHER GIVEN YEAR IS LEAP YEAR OR NOT..
 #include<stdio.h>
 
 int main(){
 int year ;
 printf("enter the year\n");
 scanf("%d" , &year);

 if(year%400==0){
     printf("the year %d is leap year\n" , year);
 }
  else if(year%100==0)
  {
     printf("the given year %d is  not a leap year\n" , year);
 }
 else if (year%4==0)
 { printf("the year %d is leap year\n" , year );
     
 }
 else{
     printf("the year %d is not a leap year\n", year );
 }
 
 return 0;
 }


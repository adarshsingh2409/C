  
//   this pattern is made  by default 
//   this pattern is made  by default
  
  #include<stdio.h>

int main(){
int i, j;
for(i=1; i<=5 ; i++)
{ for(j=1 ; j<=5 ; j++)
 {
     if (i+j<=5)
 
    printf(" "); // now the reson is known why this pattern is made 
  else  printf(" * ");  // this is due to the space provided in surounding of *
  }
 printf("\n");
}
return 0;
}

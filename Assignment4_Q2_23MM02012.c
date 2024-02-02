#include <stdio.h>
int main (){
    float s,b;
    printf ("enter credit score");
    scanf("%f",&s);
    printf ("enter current balance");
    scanf("%f ",&b);

if (s<600)
 {
    
    printf("\ncalculated interest=%f", b*(0.15));
 }   
else if (s>=600 && s<=750)
 {
    
    printf("\ncalculated interest=%f", b*(0.12));
 }   
else 
 {
    printf("\ncalculated interest=%f", b*(0.10));
 } 
   
    return 0;
  }
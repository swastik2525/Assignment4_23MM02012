#include<stdio.h>

int main(){
    int a,i,h,t,u;
    printf("enter a number ");
    scanf("%d",&a);

if (a>=100 && a<=999)
{
h=a/100;
t=(a%100)/10;
u=(a%100)%10;

if (h*h*h +t*t*t+u*u*u==a){
printf ("it is an armstrong number");}
else 
printf("\n it is a not an armstrong number ");
} 
else
 printf("invalid number");
 return 0;
    
    }
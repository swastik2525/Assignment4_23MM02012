#include<stdio.h>
int main (){
int a,b;
char c;
printf("enter an integer");
scanf("%d",&a);
printf ("choose an operator");
scanf(" %c",&c);
printf("enter one more integer");
scanf("%d",&b);
switch (c)
{
    case '+':
    printf("result:%d",a+b);
    break;

    case '-':
    printf("result:%d",a-b);
    break;

    case '*':
    printf("result:%d",a*b);
    break;

    case '/':
    printf("result:%f",a/b);
    break;

    default:
    printf("invalid number");
    return 0;


}
}
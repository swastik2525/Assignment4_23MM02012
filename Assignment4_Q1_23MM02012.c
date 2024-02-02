#include<stdio.h>
int main(){
    int a;
    printf("enter an integer");
    scanf("%d",&a);
    switch(a%2){
        case 0:

        printf ("\n it is an even number");
        break;
        default:
        printf("\n it is an odd number");


    }
    return 0;
    
}
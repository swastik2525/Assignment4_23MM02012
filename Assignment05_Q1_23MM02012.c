#include <stdio.h>
int main()
{
    int n, count = 0, ncopy;
    printf("Enter the number");
    scanf("%d", &n);
    ncopy = n;

    while (n > 0)
    {
        n = n / 10;
        count++;
    }
    printf("total number of digits%d", count);
   int dig,sum=0;
   int seennum[10]={0};
   while(ncopy!=0)
   {
    dig=ncopy%10;
    if(!seennum[dig])
    {
        sum+=dig;
        seennum[dig]=1;
    }
    ncopy/=10;
   }
   printf("\nthe sum of unique digits %d",sum);
   return 0;


    }
   


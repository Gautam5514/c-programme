#include<stdio.h>
int main()
{
    int i,n,digit,rem=0,temp;
    printf("\n Enter any number");
    scanf("%d",&n);
    temp=n;

    while(n!=0)
    {
        digit = n % 10;
        rem = rem+(digit*digit*digit);
        n=n/10;
    }
    if(temp==rem)
    printf("\n Armstrong no.:");
    else
    printf("\n Not armstrong no.:");
    return 0;
}
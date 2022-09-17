#include<stdio.h>
int main()
{
    int n,rev=0,num;
    printf("\n Enter any number.:");
    scanf("%d",&n);
    
    while(n!=0)
    {
        num = n % 10;
        rev = rev * 10 + num;
        n = n / 10;
    }
    printf("reverse number %d",rev);
    return 0;
}
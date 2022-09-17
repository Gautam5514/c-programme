#include<stdio.h>
int main()
{
    int n,rem,p=1,bnum=0;

    printf("\n Enter the binary no.:");
    scanf("%d",&n);

    while(n!=0)
    {
        rem = n % 10;
        bnum = bnum+rem *p;
        p=p*2;
        n=n/10;
    }
    printf(" convert  binary to decimal %d ",bnum);
}
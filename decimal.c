#include<stdio.h>
int main()
{
    int rem,i,bnum=0,p=1,n;

    printf("\n Enter decimal number");
    scanf("%d",&n);

    while(n!=0)
    {
        rem = n % 2;
        bnum = rem*p +bnum;
        p= p*10;
        n=n/2;
    }    
    printf(" convert of decimal to binary %d\n",bnum);
    return 0;
}
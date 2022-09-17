#include<stdio.h>
int main()
{
   int i,n,c=0;

   printf("\n Enter any number");
   scanf("%d",&n);
     
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            c++;
        }
    }
   if(c==2)
     printf("\n Prime no.:");
   else
      printf("\n Not prime no.:");
    return 0;
}
#include<stdio.h>
int main()
{
    int n,rev=0,digit,temp;
    printf("\n Enter any number");
    scanf("%d",&n);
    temp=n;

    while(n!=0)
    {
        digit= n % 10;
        rev= rev * 10 + digit;
        n/=10;
    }
      
      if(rev==temp)
          printf("\n Polindrome no.:");
      else
          printf("\n Not polindrome no.:");

      return 0;

} 

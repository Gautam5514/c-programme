#include<stdio.h>
int main()
{
     int n, i=1;
     float sum=0.0;

     printf("Enter the limit (n Value): ");
     scanf("%d",&n);

     while(i<=n)
     {
         sum+=(1.0/i); 
         i++;
     }

     printf("Sum = %f\n", sum);

     return 0;
}
#include <stdio.h>

void main()
{   long int n,i,t=1;
	int sum =0;
	printf("Input the number or terms :");
	scanf("%ld",&n);
	for (i=1;i<=n;i++)
	{ sum +=t;
	  printf("%ld   ",t);
	  t=t*10+1;
	}
	printf("\nThe sum of the series = %d \n",sum);
} 

#include<stdio.h>
int main()
{
    int a[10]={1,2,3,4};
    int ar[10],i;
    printf("%d\n",a[0]);
    printf("%d\n",a[1]);
    printf("%d\n",a[7]);
    printf("%d\n",a[9]);
    
    printf("\n Enter the five elements:\n");
    for(i=0;i<5;i++)
    scanf("%d"&ar[i]);
    for(i=0;i<7;i++)
    printf("%d\n",ar[i]);
    return 0;
}
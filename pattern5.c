#include<stdio.h>
int main()
{
    int i,j,k,n,l;

    printf("Enter the rows.:");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        for(l=1;l<=n-i;l++)
        {
            printf(" ");
        }
    
    for(j=1;j<=i;j++)
    {
        printf("%d",j);
    }
    for(k=i-1;k>=1;k--)
    {
        printf("%d",k);
    }
    printf("\n");
    
    }
    return 0;
}
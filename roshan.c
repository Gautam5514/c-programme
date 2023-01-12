#include<stdio.h>
#include<conio.h>
int main()
{
    int a;
    int *ptr=&a;
    printf("\n Enter the value of a");
    scanf("%d",&a);
    printf("\n%d",ptr);
    getch();

    return 0;
}
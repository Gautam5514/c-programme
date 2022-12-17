#include<stdio.h>
int main()
{
    char s[3][10];
    int i;
    printf("\n Enter three string");
    for(i=0;i<=2;i++)
    gets(&[i][0]);

    for(i=0;i<=2;i++)
    printf("%s\n",s[i]);
    getch();

}
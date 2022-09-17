#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c;
    float root1,root2,rootfor;
    float deno=2*a;
    printf("Enter the value of a \n");
    scanf("%f",&a);
    printf("Enter the value of b \n");
    scanf("%f",&b);
    printf("Enter the value of c \n");
    scanf("%f",&c);

    rootfor=sqrt(b*b-4*a*c);
    root1=(-b+rootfor)/deno;
    root2=(-b-rootfor)/deno;
    printf("root1=%f and root2=%f\n",root1,root2);

    return 0;
}
#include<stdio.h>

union hack_union{
    char name[32];
    float salary;
    int workerNo;
    
}
hu;
struct hack_struct{
    char name[32];
    float salary;
    int workerNo;
}
hs;
int main(){
    printf(" %ld", sizeof(hu));
    printf("\n%ld", sizeof(hs));
    return 0;
}

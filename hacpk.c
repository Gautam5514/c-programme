#include<stdio.h>
struct hack{
    int x,y,z;
};
int main(){
    struct hack i1={.y=1, .x=4, .z=47};
    struct hack i2={.y=13};
    printf("x=%d, y=%d,z=%d",i1.x,i1.y,i1.z);
    return 0;
}
#include <stdio.h>
#include <stdlib.h>
int sum(int,int);
int pro(int,int);
int compute(int,int,int(*)(int,int));

int main()
{
    int a=10,b=20;
    int (*fp[2])(int,int);
    fp[0]=sum;
    fp[1]=pro;

    compute(a,b,fp[0]);
    compute(a,b,fp[1]);
}
int compute(int x,int y,int (*fp)(int,int)){
int z;
z=fp(x,y);
printf("%d\n",z)
}
int sum(int x,int y)
{
    return x+y;
}
int pro(int x,int y)
{
    return x*y;
}

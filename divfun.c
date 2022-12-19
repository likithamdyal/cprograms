#include<stdio.h>
void mul(int*);
int main()
{
    int n=100;
    printf("%d",n);
    mul(&n);
    printf("%d",n);
    return 0;
}
void mul(int *x)
{
    *x=*x*5;
    printf("%d ",*x);
}
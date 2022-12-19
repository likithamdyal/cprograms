#include<stdio.h>
void test(int *);
int main()
{
    int n=100;
    printf("%d",n);
    test(&n);
    printf("%d",n);
    return 0;
}
void test(int *a)
{
    *a=*a+2;
    printf("%d ",*a);
}
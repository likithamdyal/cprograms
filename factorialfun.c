#include<stdio.h>
int fact(int);
int main()
{
    int n,res;
    printf("enter n\n");
    scanf("%d",&n);
    res=fact(n);
    printf("factorial=%d",res);
    return 0;
}
int fact(int x)
{
    if(x==0)
    return 1;
    else
    return x*fact(x-1);
}
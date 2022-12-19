#include<stdio.h>
int main()
{
    int n;
    int m;
    printf("enter a number\n");
    scanf("%d%d",&n,&m);
    if(n>m)
    {
        printf("%d is max\n",n);
    }
    else
    {
        printf("%d is max",m);
    }
    return 0;
}
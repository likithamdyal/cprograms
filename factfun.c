#include<stdio.h>
int factorial();
int main()
{
    int n,fact;
    
    fact=factorial(n);
    printf("fact=%d",fact);
    return 0;
}
int factorial(int p)
{
    int n,i,fact=1;
    printf("enter n\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    return fact;
}

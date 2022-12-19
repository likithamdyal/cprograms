/*
write a program 
*/
#include<stdio.h>
int main()
{
    int n,flag=0;
    int i;
    printf("enter a num\n");
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            flag=1;
        }
    }
    if(flag==0)
    {
        printf("prime num");
    }
    else
    {
        printf("not prime num");
    }

}
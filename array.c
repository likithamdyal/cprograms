#include<stdio.h>
int main()
{
    int i,m[100];
    
    printf("enter an array item\n");
    for(i=0;i<5;i++)
    {
    scanf("%d",&m[i]);
    }
    for(i=2;i<5;i++)
    {
        printf("%d\n",m[i]);
    }
    for(i=4;i>=2;i--)
    {
        printf("%d\n",m[i]);
    }
}
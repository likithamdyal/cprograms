#include<stdio.h>
int main()
{
    int n,pos,i,m[100];
    printf("enter n\n");
    scanf("%d",&n);
    printf("enter array elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&m[i]);
    }
    printf("enter pos\n");
    scanf("%d",&pos);
    for(i=pos;i<n;i++)
    {
        m[i]=m[i+1];
    }
    n=n-1;
    for(i=0;i<n;i++)
    {
        printf("%d\t",m[i]);
    }

}
#include<stdio.h>
int main()
{
    int n,pos,item,i,a[100];
    printf("enter array number\n");
    scanf("%d",&n);
    printf("enter array elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);

    }
    printf("enter element to insert and pos\n");
    scanf("%d%d",&item,&pos);
    for(i=n-1;i>=pos;i--)
    {
        a[i+1]=a[i];
    }
    a[pos]=item;
    n=n+1;
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}

#include<stdio.h>
int main()
{
    int n,pos,i,m[100],del;
    printf("enter n\n");
    scanf("%d",&n);
    printf("enter array elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&m[i]);
    }
    printf("enter value to delet\n");
    scanf("%d",&del);
         for(i=0;i<n;i++)
    {
        if(m[i]==del)
        {
            pos=i;
            break;
        }
    }
    for(i=pos;i<n;i++)
    {
        m[i]=m[i+1];
    }

    n=n-1;
    for(i=0;i<n;i++)
    {
        printf("%d\n",m[i]);
    }
}
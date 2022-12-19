#include<stdio.h>
int main()
{
    int n,key,i,flag=0,m[100],pos;
    printf("enter n\n");
    scanf("%d",&n);
    printf("enter array elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&m[i]);
    }
    printf("enter key\n");
    scanf("%d",&key);
    for(i=0;i<5;i++)
    {
        if(m[i]==key)
        {
            flag=1;
            pos=i;
            break;
        }
    }
    if(flag==0)
    {
        printf("unsuccesfull search at%d",pos);
    }
    else
    {
        printf("successfull search at %d",pos+1);
    }
}
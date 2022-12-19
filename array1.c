#include<stdio.h>
int main()
{
    int sum=0,i,m[6]; 
    printf("enter marks\n");
    for(i=0;i<6;i++)
    {
    scanf("%d",&m[i]);
    }
    for(i=0;i<6;i++)
    {
    sum=sum+m[i];
    
    }
    printf("total marks=%d\n",sum);
    printf("avg of sum=%f",(float)sum/6);
}
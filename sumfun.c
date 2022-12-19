#include<stdio.h>
void sum(int);
int main()
{
    int a[10],n,i;
    printf("enter size array\n");
    scanf("%d",&n);
    printf("enter array elements\n");
    for(i=0;i<n;i++)
    {
     scanf("%d",&a[i]);
      sum(a[i]);
    }
}
void sum(int c)
{
   static int sum=0;
    sum=sum+c;
    printf("%d",sum);
}
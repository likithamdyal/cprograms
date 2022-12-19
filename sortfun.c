#include<stdio.h>
void sort(int[],int);
int main()
{
    int a,n[10],i;
    printf("enter array size\n");
    scanf("%d",&a);
    printf("enter array elements\n");
    for(i=0;i<a;i++)
    {  
          scanf("%d",&n[i]);  
    }
    sort(n,a);
    return 0;
}
void sort(int n[10],int a)
{
    int i,j,temp;
    for(i=0;i<a;i++)
    {
        for(j=0;j<a-i-1;j++)
        {
            if(n[j]>n[j+1])
          {
            temp=n[j];
            n[j]=n[j+1];
            n[j+1]=temp;
           }
        }
    }
    printf("sorted elements\n");
   for(i=0;i<a;i++)
   {
       printf("%d",n[i]);
   }
}
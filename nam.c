#include<stdio.h>
int main()
{
    int a,b;
    int c;
    printf("enter a value\n");
    scanf("%d",&a);
    printf("enter a value\n");
    scanf("%d",&b);
    c=a+b;
    printf("given numbers are %d,%d\n",a,b);
    printf("sum of two values=%d\n",c);
    return 0; 
}
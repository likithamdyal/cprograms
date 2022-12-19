#include<stdio.h>
int main()
{
    int a;
    int b,c;
    printf("enter a value of b,c\n");
    scanf("%d%d",&b,&c);
    a=b&c;
    printf("%d&%d=%d\n",b,c,a);
    a=b|c;
    printf("%d|%d=%d\n",b,c,a);
       
return 0;
}
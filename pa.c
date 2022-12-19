#include<stdio.h>
int main()
{
    int num,rev=0,rem,tem;
    printf("enter n\n");
    scanf("%d",&num);
    tem=num;
    while(num)
    {
        rem=num%10;
        rev=rev*10+rem;
        num=num/10;
    }
    if(rev==tem)
    {
        printf("palindrome");
    }
    else
    {
        printf("not palindrome");
    }
}
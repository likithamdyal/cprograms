#include<stdio.h>
int main()
{
    int a;
    float tax;
    printf("enter a salary\n");
    scanf("%d",&a);
    if(a<=10000)
    {
        tax=a*10/100;
        printf("tax=%f",tax);
    }
    else if(a<=20000)
    {
        tax=a*15/100;
        printf("tax=%f",tax);
    }
    else
    {
        tax=a*30/100;
        printf("tax=%f",tax);
    }
    return 0;
}
    
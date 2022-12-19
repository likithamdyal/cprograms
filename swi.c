#include<stdio.h>
int main()
{
int a,b;
char op;
printf("enter a b\n");
scanf("%d%d",&a,&b);
printf("1--+ 2-- - 3--* 4--/\n");
scanf(" %c",&op);
switch(op)
{
    case '+':
    printf("add=%d",(a+b));
    break;
    case '-':
    printf("sub=%d",(a-b));
    break;
    case '*':
    printf("mul=%d",(a*b));
    break;
    case '/':
    printf("div=%f",(float)a/b);
    break;
    default:
    printf("invalid");
}
return 0;
}
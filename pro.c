#include<stdio.h>
int main()
{
    int a,b,op; 
    printf("enter a b\n");
    scanf("%d%d",&a,&b);
    printf("1--+ 2-- - 3--* 4--/\n");
    scanf("%d",&op);
    switch(op)
{
    case 1:
    printf("sum=%d",(a+b));
break;
case 2:
printf("sub=%d",(a-b));
break;
case 3:
printf("mul=%d",(a*b));
break;
case 4:
printf("div=%f",(float)a/b);
break;
}
return 0;
}
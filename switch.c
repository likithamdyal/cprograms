#include<stdio.h>
int main()
{
    int a,b,ch;
    printf("enter a b\n");
    scanf("%d%d",&a,&b);
    printf("1--+ 2-- - 3--* 4---/\n");
    scanf("%d",&ch);
    switch(ch)
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
        deafault:
        printf("invalid");
        break;
    }
    return 0;
}
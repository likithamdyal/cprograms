#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter a b c\n");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b)
    {
        if(a>c)
        {
            printf("A");
        }
        else
        {
            printf("C");
        }
    }
        else
        {
            if(b>c)
            {
                printf("b");
            }
            else
            {
                printf("c");
            }
        }
        return 0;
    
}
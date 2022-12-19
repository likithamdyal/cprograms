#include<stdio.h>
int main()
{
    int a,b,c,disc,r1,r2,ipart,rpart;
    printf("enter a b c\n");
    scanf("%d%d%d",&a,&b,&c);
    disc=(b*b)-4*a*c;
    if(a*b*c==0)
    {
        printf("no rules");
    }
    else if(disc==0)
    {
        printf("roots are equal\n");
        r1=r2=-b/2*a;
        printf("root1=root2%d",r1);
    }
    else if(disc>0)
    {
        printf("roots are real\n");
        r1=(-b+sqrt(disc))/(2*a);
        r2=(-b-sqrt(disc))/(2*a);
        printf("root1=%d\nroot2=%d",r1,r2);
    }
    else
    {
        printf("roots are imaginary\n");
        rpart=-b/2*a;
        ipart=(sqrt(-disc))/(2*a);
        printf("root1=%d+root2=%d\n",rpart,ipart);
        printf("root1=%d-root2=%d\n",rpart,ipart);
    }
}
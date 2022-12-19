#include<stdio.h>
int main()
{
    int a,b,c,dis;
    float r1,r2,rpart,ipart;
    printf("enter a b c\n");
    scanf("%d%d%d",&a,&b,&c);
    dis=(b*b)-4*a*c;
    if(a*b*c==0)
    {
        printf("no rules\n");
    }
    else if(dis==0)
    {
        printf("roots are equal\n");
        r1=r2=-b/(2*a);
        printf("r1=r2=%f",r1);
    }
    else if(dis>0)
    {
      printf("roots are real and distinct\n");
      r1=(-b+sqrt(dis))/(2*a);
      r2=(-b-sqrt(dis))/(2*a);
      printf("r1=%f\nr2=%f\n",r1,r2);
    }
    else
    {
        printf("roots imaginary\n");
        rpart=-b/(2*a);
        ipart=(sqrt(-dis))/(2*a);
        printf("r1=%f+i%f\n",rpart,ipart);
        printf("r2=%f-i%f\n",rpart,ipart);
    }
}
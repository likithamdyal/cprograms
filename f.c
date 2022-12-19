//displaying all data types
#include<stdio.h>
int main()
{
    int a;
float f;
char c;
double d;
printf("enter a value=\n");
scanf("%d",&a);
printf("enter float value=\n");
scanf("%f",&f);
printf("enter a char value\n");
scanf(" %c",&c);
printf("enter double value\n");
scanf("%lf",&d);
printf("address of a=%d,a=%d\n",&a,a);
printf("address of f=%d,f=%f\n",&f,f);
printf("address of c=%d,c=%c\n",&c,c);
printf("address of d=%d,d=%d",&d,d);
return 0;
}
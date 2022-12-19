#include<stdio.h>
#include<conio.h>
int main()
{
int a=10,*p;
clrscr();
p=&a;
printf("%d",*p);
printf("%d",p);
getch();
return 0;
}
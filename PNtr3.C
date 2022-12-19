#include<stdio.h>
#include<conio.h>
int main()
{
char s='A',str[100]={"VZSOLUTIONS"};
char *p=&s;
clrscr();
printf("%d\n",p);
printf("%d\n",*p);
p=str;
printf("%d\n",p);
printf("%s",p);
getch();
return 0;
}
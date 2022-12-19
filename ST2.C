#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
char a[10]={"abcd"};
char b[10];
clrscr();
puts(a);
printf("enter string\n");
gets(b);
printf("%s",b);
getch();
return 0;
}
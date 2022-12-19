#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
char a[10]={"ad"};
char b[10]={"bc"};
int i,j;
clrscr();
for(i=0;a[i]!='\0';i++);
for(j=0;b[j]!='\0';j++)
{
a[i+j]=b[j];
}
a[i+j]='\0';
puts(a);


getch();
return 0;
}
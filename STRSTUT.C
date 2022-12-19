#include<stdio.h>
#include<conio.h>
struct employe
{
char name[100];
int  id;
char dep[100];
int salary;
};
int main()
{
int i;
struct employe e[2];
clrscr();
for(i=0;i<2;i++)
{
printf("enter employe details\n");
scanf("%s%d%s%d",e[i].name,&e[i].id,e[i].dep,&e[i].salary);
}
for(i=0;i<2;i++)
{
printf("%s\n%d\n%s\n%d\n",e[i].name,e[i].id,e[i].dep,e[i].salary);
}
getch();
return 0;
}
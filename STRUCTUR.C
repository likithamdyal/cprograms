#include<stdio.h>
#include<conio.h>
#include<string.h>
struct student
{
char name[100];
char branch[100];
int regno;
float per;
};
int main()
{
 struct student c1;
 clrscr();
 printf("enter student details\n");
 scanf("%s%s%d%f",c1.name,c1.branch,&c1.regno,&c1.per);
// strcpy(c1.name,"likith");
// strcpy(c1.branch,"cse");
// c1.regno=21;
// c1.per=73.34;
 printf("%s%s%d%f",c1.name,c1.branch,c1.regno,c1.per);
 getch();
 return 0;
}
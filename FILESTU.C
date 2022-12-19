#include<stdio.h>
#include<conio.h>
struct student
{
int rolno;
char name[100];
};
int main()
{
FILE *fp;
struct student s1,s2;
clrscr();
printf("enter student details\n");
scanf("%d%s%d%s",&s1.rolno,s1.name,&s2.rolno,s2.name);
printf("%d%s%d%s",s1.rolno,s1.name,s2.rolno,s2.name);
fp=fopen("studentt.txt","w+");
fprintf(fp,"%d %s\n%d %s",s1.rolno,s1.name,s2.rolno,s2.name);
fclose(fp);
getch();
return 0;
}
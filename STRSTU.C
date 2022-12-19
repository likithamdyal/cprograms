#include<stdio.h>
#include<conio.h>
struct student
{
char name[100];
int regno;
char branch[100];
float per;
};
int main()
{
struct student t;
struct student s={"kruthik",26,"ec",75.34};
printf("%s%d%s%f\n",s.name,s.regno,s.branch,s.per);

strcpy(t.name,"santhosh");
t.regno=9;
strcpy(t.branch,"aiml");
t.per=80.34;
printf("%s%d%s%f\n",t.name,t.regno,t.branch,t.per);
printf("%d",sizeof(int));
getch();
return 0;
}
#include<stdio.h>
#include<conio.h>
int main()
{
FILE *fp;
int rolno;
char name[100];
clrscr();
fp=fopen("studentt.txt","r+");
while(fscanf(fp,"%d%s",&rolno,name)!=EOF)
{
printf("%d %s\n",rolno,name);
}
fclose(fp);
getch();
return 0;
}

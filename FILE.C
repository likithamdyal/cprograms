#include<stdio.h>
#include<conio.h>
int main()
{
FILE *fp;
clrscr();
fp=fopen("sample.c","w+");
fprintf(fp,"%d",2);
fclose(fp);
getch();
return 0;
}
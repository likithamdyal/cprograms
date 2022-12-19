#include<stdio.h>
#include<conio.h>
int main()
{
FILE *fp;
char str[100];
clrscr();
fp=fopen("college.txt","w+");
printf("enter string\n");
scanf("%s",str);
fprintf(fp,"%s",str);
printf("data writen sucess...");
fclose(fp);
getch();
return 0;
}
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
char a[10]={"abcd"} ;
char b[10]={"efgh"};
int c,len;
clrscr();
printf("concatination\n");
strcat(a,b);
puts(a);
printf("copy\n");
strcpy(a,b);
puts(a);
printf("reverse\n");
strrev(a);
puts(a);
strrev(b);
puts(b);
printf("comparision\n");
c=strcmp(a,b);
printf("%d\n",c);
printf("length\n");
len=strlen(a);
printf("%d\n",len);




 getch();
 return 0;
}
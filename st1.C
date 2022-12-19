#include<stdio.h>
#include<conio.h>
int main()
{
char a[10]={"asdf"};
char b[10]={"qwer"};
clrscr();
printf("concatinate\n");
strcat(a,b);
puts(a);
printf("reverse\n");
strrev(b);
puts(b);
printf("copy\n");
strcpy(a,b);
puts(a);




getch();
 return 0;
}
#include<stdio.h>
#include<conio.h>
#include<malloc.h>
int main()
{
int *p,n,i;
clrscr();
printf("enter the size of array\n");
scanf("%d",&n);
p=(int*)calloc(n,sizeof(int));
printf("enter n values\n");
for(i=0;i<n;i++)
{
scanf("%d",p+i);
}
for(i=0;i<n;i++)
{
printf("%d\n",*(p+i));
}
printf("enter realloc\n");
realloc(p,n*sizeof(int));
for(i=n;i<n+n;i++)
{
scanf("%d",p+i);
}
for(i=0;i<n+n;i++)
{
printf("%d",*(p+i));
}
free(p);
getch();
return 0;
}
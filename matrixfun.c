#include<stdio.h>
void read_matrix(int a1[10][10],int,int);
void add_matrix(int a1[10][10],int b2[10][10],int c3[10][10],int,int);
void display(int c3[10][10],int,int);
int main()
{
    int row,col,a1[10][10],b2[10][10],c3[10][10];
    printf("enter matrix order\n");
    scanf("%d%d",&row,&col);
    read_matrix(a1,row,col);
    read_matrix(b2,row,col);
    add_matrix(a1,b2,c3,row,col);
    display(c3,row,col);
    return 0;
}
void read_matrix(int a1[10][10],int r,int c)
{
    int i,j;
    printf("enter matrix elements\n");
for(i=0;i<r;i++)
{
    for(j=0;j<c;j++)
    {
        scanf("%d",&a1[i][j]);
    }
}
}
void add_matrix(int a1[10][10],int b2[10][10],int c3[10][10],int r,int c)
{
int i,j;
for(i=0;i<r;i++)
{
  for(j=0;j<c;j++)
{
  c3[i][j]=a1[i][j]+b2[i][j];
}
}
}
void display(int c3[10][10],int r,int c)
{
    int i,j;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d ",c3[i][j]);
        } 
        printf("\n");
    }
}

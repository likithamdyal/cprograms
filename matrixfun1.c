#include<stdio.h>
void read_matrix(int[10][10],int,int);
void mul_matrix(int[10][10],int[10][10],int[10][10],int,int,int,int);
void display(int[10][10],int,int);
int main()
{
    int a[10][10],b[10][10],c[10][10],r1,c1,r2,c2;
    printf("enter order two of matrix\n");
    scanf("%d%d%d%d",&r1,&c1,&r2,&c2);
    read_matrix(a,r1,c1);
    read_matrix(b,r2,c2);
    mul_matrix(c,a,b,r1,c1,r2,c2);
    display(c,r1,c2);
    return 0;
}
void read_matrix(int a[10][10],int r1,int c1)
{
    int i,j;
    printf("enter matrix elements\n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
}
void mul_matrix(int c[10][10],int a[10][10],int b[10][10],int r1,int c1,int r2,int c2)
{
  int i,j,k;
  for(i=0;i<r1;i++)
  {
      for(j=0;j<c2;j++)
      {
          c[i][j]=0;
          for(k=0;k<r2;k++)
          {
              c[i][j]=c[i][j]+a[i][k]*b[k][j];
          }
      }
  }
}
void display(int c[10][10],int r1,int c2)
{
    int i,j;
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
        {
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
}
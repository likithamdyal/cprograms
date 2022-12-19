#include<stdio.h>
int main()
{
    int a[100][100],b[100][100],c[100][100],i,j,row1,col1,k,row2,col2;
    printf("enter matrix order\n");
    scanf("%d%d",&row1,&col1);
    printf("enter matrix elements\n");
    for(i=0;i<row1;i++)
    {
        for(j=0;j<col1;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
        printf("enter matrix 2 order\n");
    scanf("%d%d",&row2,&col2);
    printf("enter matrix 2\n");
    for(i=0;i<row2;i++)
    {
        for(j=0;j<col2;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
   for(i=0;i<row1;i++)
   {
       for(j=0;j<col2;j++)
       {
             c[i][j]=0;
           for(k=0;k<row2;k++)
           {
              
               c[i][j]=c[i][j]+a[i][k]*b[k][j];
           }
       }
   }
   for(i=0;i<row1;i++)
   {
       for(j=0;j<col2;j++)
       {
           printf("%d ",c[i][j]);
       }
       printf("\n");
   }
}
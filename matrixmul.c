#include<stdio.h>
int main()
{
    int a[100][100],b[100][100],c[100][100],i,j,k,row,col;
    printf("enter matrix order\n");
    scanf("%d%d",&row,&col);
    printf("enter matrix elements\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("enter matrix 2\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    printf("product of matrix\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
           c[i][j]=0;
            for(k=0;k<row;k++)
            {
                 
                c[i][j]=c[i][j]+a[i][k]*b[k][j];
            }
        }
    }
        for(i=0;i<row;i++)
        {
            for(j=0;j<col;j++)
            {
                printf("%d ",c[i][j]);
            }
        
        printf("\n");
    }
}
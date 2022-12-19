#include<stdio.h>
int main()
{
    int m[10][20],row,colum,i,j;
    printf("enter matrix order\n");
    scanf("%d%d",&row,&colum);
    printf("enter matrix elements\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<colum;j++)
        {
            scanf("%d",&m[i][j]);
        }
    }
for(i=0;i<row;i++)
{
    for(j=0;j<colum;j++)
    {
        printf("%d ",m[i][j]);
    }
    printf("\n");
}

}
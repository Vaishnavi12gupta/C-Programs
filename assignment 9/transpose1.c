#include<stdio.h>
int transpose(int mat[][10],int n,int m)
{
    int trans[10][10];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
           trans[i][j]=mat[j][i];
        }
    }
    printf("after transpose a matrix:\n");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d ",trans[i][j]);
        }
        printf("\n");
    }
}
int main()
{
    int mat[10][10],i=0,j=0,n=0,m=0;
    printf("enter the size of rows and column:");
    scanf("%d%d", &n,&m);
    printf("enter the values of rows and column:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }
    transpose(mat,n,m);
    return 0;
}
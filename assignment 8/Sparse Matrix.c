#include<stdio.h>
int sparsematrix(int mat[][10],int n, int m)
{
    int i,j,totalZeros=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(mat[i][j]==0)
            {
                totalZeros+=1;
            }
        }
    }
    if(totalZeros >= ((n*m)/2))
    {
        printf("sparse matrix");
    }
    else
    {    
        printf("not sparse matrix");
    }
}
int main()
{
    int mat[10][10],m,n,i,j;
    printf("enter the size of rows and column:\n");
    scanf("%d%d",&n,&m);
    printf("enter the value for rows and column:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&mat[i][j]);
        } 
    }
    sparsematrix(mat,n,m);
    return 0;
}


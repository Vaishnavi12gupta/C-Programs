#include<stdio.h>
int main()
{
    int a[50][50],b[50][50],c[50][50],i,j,k,n,m;
    printf("enter the size of rows and column:\n");
    scanf("%d%d",&n,&m);
    printf("enter the values for matrix a\n");
    for(i=0;i<n;i++)
    for(j=0;j<m;j++)
    {
       scanf("%d",&a[i][j]);
    }
    printf("enter the values for matrix b\n");
    for(i=0;i<n;i++)
    for(j=0;j<m;j++)
    {
        scanf("%d",&b[i][j]);
    }
    for(i=0;i<n;i++)
    for(j=0;j<m;j++)
    {
        c[i][j]=0;
        for(k=0;k<m;k++)
        {
           c[i][j]+=a[i][k]*b[k][j];
        }
    }
    printf("after multiply two matrix\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%d ",c[i][j]);
        }
        printf("\n"); 
    }
}
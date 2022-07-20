#include<stdio.h>
int transpose(int *pt,int n,int m)
{
    int i,j,trans[10][10];
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            trans[j][i]=*(pt+i*10+j);
        }
    }
    printf("after transpose a matrix:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ",trans[i][j]);
        }
        printf("\n");
    }
}
int main()
{
    int mat[10][10],i,j,n,m,*pt;
    pt=mat[0];
    printf("enter the size of rows and column:");
    scanf("%d%d", &n,&m);
    printf("enter the values of rows and column:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d", (pt+i*10+j));
        }
    }
    transpose(pt,m,n);
    return 0;
}
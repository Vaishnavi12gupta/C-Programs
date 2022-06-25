#include<stdio.h>
int matrix(int mat[][10],int n, int m)
{
    int evenAdd=0, oddAdd=0,i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(mat[i][j]%2==0)
            {
                evenAdd+=mat[i][j];
            }
            else
            {
                oddAdd+=mat[i][j];
            }
        }
    }
    printf("addition of even position=%d\n",evenAdd);
    printf("addition of odd position=%d\n",oddAdd);

}
int main()
{
    int mat[10][10],m,n,i,j;
    printf("entcer the size of rows and column:\n");
    scanf("%d%d",&n,&m);
    printf("enter the value for rows and column:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&mat[i][j]);
        } 
    }
    matrix(mat,n,m);
}
    
#include<stdio.h>
int main()
{
    int i, j,k,r;
    printf("enter the number of rows:");
    scanf("%d",&r);
    for(i=1;i<=r;i++) 
    {
        for(k=(r-1); k>=i;k--)
        {
            printf(" ");
        }
        for(j=1; j<=i; j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }
}
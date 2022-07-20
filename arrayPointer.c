#include<stdio.h>
int sumElement(int a[50],int *b[50],int n)
{
    int i,sum=0;
    for(i=0;i<n;i++)
    {
        sum=sum+*b[i];
    }
    printf("sum of all elements=%d",sum);
}
int main()
{
    int a[50],*b[50],n,i,sum=0;
    printf("enter the size of array a:");
    scanf("%d",&n);
    printf("enter the values for array a:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        b[i]=&a[i];
    }
    sumElement(a,b,n);
}
    
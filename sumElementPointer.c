#include<stdio.h>
int sum(int*ptr,int n)
{
    int i,sum=0;
    for(i=0;i<n;i++)
    {
       sum=sum+ptr[i];
    }
    printf("sum of all elememnts=%d",sum);
}
int main()
{
    int n,arr[50],i,*ptr;
    ptr=arr;
    printf("enter the size of an array:");
    scanf("%d",&n);
    printf("enter the value\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&ptr[i]);
    }
    sum(ptr,n);
}
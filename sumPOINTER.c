#include<stdio.h>
int sum(int *pt, int n)
{
    int sum=0,i;
    for(i=0;i<n;i++)
    {
        sum=sum+*pt;
        pt++;
    }
    printf("sum of all elements:%d",sum);
}
int main()
{
    int arr[50],i,n;
    int *pt;
    pt= arr;
    printf("enter the size of an array:");
    scanf("%d",&n);
    printf("enter the value:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    sum(pt,n);
}
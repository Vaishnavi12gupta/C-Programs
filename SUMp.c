#include<stdio.h>
int main()
{
    int a[50],*p,n=0,i=0,sum=0;
    printf("enter the size of an array:");
    scanf("%d",&n);
    p=a;
    printf("enter the value:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",(p+i));
        
    }
    for(i=0;i<n;i++)
    {
        sum=sum+*(p+i);
    }
    printf("sum of elements=%d",sum);
}
#include<stdio.h>
int main()
{
    int a[10],i=0,n=0,*p,sum=0;
    float avg=0;
    p=a;
    printf("enter the size of an array:");
    scanf("%d",&n);
    printf("enter the value:");
    for(i=0;i<n;i++)
    {
        scanf("%d",(p+i));
    }
    for(i=0;i<n;i++)
    {
        sum=sum+*(p+i);
    }
    avg=sum/n;
    printf("average of total element:%f",avg);

}
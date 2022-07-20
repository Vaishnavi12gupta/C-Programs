#include<stdio.h>
int main()
{
    int n[10],i,sum=0;
    printf("enter numbers:\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",n[i]);
    }
    for(i=0;i<10;i++)
    {
        sum=sum+i;
    }
    return 0;
}
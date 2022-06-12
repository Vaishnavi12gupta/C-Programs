#include<stdio.h>
int main()
{
    int a,c,sum=0;
    printf("enter a number:");
    scanf("%d",&a);
    while(a!=0)
    {
        c=a;
        c=a%10;
        a=a/10;
        sum=sum+c;
    }
    printf("sum of digits %d\n",sum);
}
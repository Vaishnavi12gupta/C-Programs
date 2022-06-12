#include<stdio.h>
int main()
{
    int a,rev=0,remainder;
    printf("enter a number:");
    scanf("%d",&a);
    while(a!=0)
    {
        remainder=a%10;
        rev=(rev*10)+remainder;
        a=a/10;
        
    }
    printf("reverse number = %d",rev);
}
#include<stdio.h>
#include<string.h>
int main()
{
    int i,sum=0,len;
    char str[50];
    printf("enter string:\n");
    scanf("%s",str);
    len=strlen(str);
    for(i=0;i<len;i++)
    {
        sum=sum+str[i];
    }
    printf("sum of ascii values=%d",sum);
}

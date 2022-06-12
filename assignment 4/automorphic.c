#include<stdio.h>
int main()
{
    int num, sqr, c=0;
    printf("Enter a number \n");
    scanf("%d",&num);
 
    sqr = num*num; 
    while(num>0)
    {
        if(num%10!=sqr%10)
        {
          c++;
          break;
        }
        num=num/10;
        sqr=sqr/10;
    }
    if(c==0)
    {
       printf("automorphic");
    }
    else
    {
       printf("not automorphic");
    }
}


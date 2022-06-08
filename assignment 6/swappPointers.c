#include<stdio.h>
int swap(int *x , int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
    return 0;
}
int main()
{
    int a,b;
    printf("enter two values\n");
    scanf("%d%d",&a,&b);
    printf("before swapping a=%d b=%d\n",a,b);
    swap(&a,&b);
    printf("after swapping a=%d b=%d",a,b);
    return 0;
}
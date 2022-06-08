#include<stdio.h>
int sum(int *x , int *y)
{
    int S;
    S=*x + *y;
    return S;
}
int mult(int *A , int *B)
{
    int M;
    M= *A * *B;
    return M;
}
int main()
{
    int a,b;
    printf("enter two values\n");
    scanf("%d%d",&a,&b);
    printf("sum of two numbers is %d\n",sum(&a,&b));
    printf("multiple of two numbers is %d",mult(&a,&b));
    return 0;
}
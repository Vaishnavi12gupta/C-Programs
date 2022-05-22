#include<stdio.h>
int main()
{
	int a, one = 0, zero = 0;
	printf("Enter the number:");
	scanf("%d",&a);
	while(a>0)
	{
		if(a&1 == 1)
			one++;
		else
			zero++;
		a = a>>1;
	}
	printf("The number of one is %d and number of zeroes is %d\n",one,zero);
}
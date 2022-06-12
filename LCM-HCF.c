#include <stdio.h>
int main() 
{
	int a, b, n1, n2, temp, hcf, lcm;
	printf("Enter two integers\n");
	scanf("%d%d", &n1, &n2);
	a = n1;
	b = n2;
	while (b != 0) 
    {
		temp = b;
		b = a % b;
		a = temp;
	}
	hcf = a;
	lcm = (n1*n2)/hcf;
	printf("Highest common factor=%d\n",hcf);
	printf("Least common multiple of=%d\n",lcm);
	return 0;
}
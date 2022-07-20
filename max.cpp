#include <iostream>
using namespace std;

int main() 
{
	int n,i,max,a[5]={12,45,234,5674,122};
	cout<<"enter the that you want to searh";
	cin>>n;
	for(i=0;i<5;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
		}
    }
		if(max%2==0)
		{
			cout<<"won";
		}	
		else
		{
			cout<<"lost";
		}	
	
	return 0;
}
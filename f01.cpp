#include<iostream>
using namespace std;
int F01(unsigned n)
{
	int i=0,a[100];
	while(n!=0)
	{
		a[i]=n%10;
		n=n/10;
		i++;
	}
	int temp;
	temp=a[0];
	a[0]=a[i-1];
	a[i-1]=temp;
	int s=0;
	for(int j=i-1;j>=0;j--)
	{
		s=s*10+a[j];
	}
	return s;
}
int main()
{
	int n;
	cin>>n;
	cout<<F01(n);
}

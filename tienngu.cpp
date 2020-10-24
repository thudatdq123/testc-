#include<iostream>
using namespace std;
int main()
{
	int n,a[100],i=0,s;
	cin>>n;
	while(n>0)
	{
		a[i]=n%10;
		n/=10;
		i++;
	}
	s=a[0]+a[i-1];
	cout<<s;
}

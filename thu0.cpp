#include<iostream>
using namespace std;
unsigned long k(unsigned x)
{
	int a[100],i=0;
	unsigned s=0;
	while(x>0)
	{
		a[i]=x%2;
		x=x/2;	s=s*10+a[i];
		i++;
		
	}

	return s;
}
int main()
{	
	unsigned x;
	cin>>x;
	cout<<k(x);
}

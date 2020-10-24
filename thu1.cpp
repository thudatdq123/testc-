#include<iostream>
#include<math.h>
using namespace std;
unsigned long k(unsigned x)
{
	int a[100],i=0,t=0;
	while(x>0)
	{
		a[i]=x%10;
		x=x/10;
		i++;
	}
	for(int j=0;j<i;j++)
	{
		t=t+pow(a[j],i);
	}
	return t;
}
int main()
{
	unsigned x;
	cin>>x;
	cout<<k(x);
}

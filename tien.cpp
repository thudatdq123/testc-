#include<iostream>
using namespace std;
int main()
{
	int n,dem=0,i=0;
	cin>>n;
	while(n>0)
	{
		dem++;
		n/=10;
	}
	cout<<dem;
}

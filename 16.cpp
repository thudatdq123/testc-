#include<iostream>
#include<cmath>
using namespace std;
int vongfor(int n)
{
	int sum=0;
	for(int i=1;i<=n;i++)
	{
		sum+=i;
	}
	return sum;
}
int congthuc(int n)
{
	return n*(n+1)/2;
}
int main()
{
	int n;
	cin>>n;
	cout<<vongfor(n);
	cout<<congthuc(n);
}

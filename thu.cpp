#include<iostream>
#include<iomanip>
using namespace std;
float s(int a,int n)
{
	int x=a;
	float t=0;
	for(int i=0;i<n;i++)
	{
		t=t+1.0/a;
		a=a*x;
	}
	return t;
}
int main()
{
	int a,n;
	cin>>a>>n;
	cout<<s(a,n);
}

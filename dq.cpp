#include<iostream>
using namespace std;
int mu(int a,int b)
{
	if(b==1) return a;
	return a*mu(a,b-1);
}
int dq(int n)
{
	if(n==1) return 1;
	return n+mu(-1,n+1)*dq(n-1);
}
int main()
{
	int n;
	cin>>n;
	cout<<dq(n);
}

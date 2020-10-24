#include<iostream>
using namespace std;
int a[100];
void incauhinh(int a[],int n)
{
	for(int i=0;i<n;i++) cout<<a[i];
	cout<<endl;
}
void datbang0(int a[],int n,int vt)
{
	for(int i=vt;i<n;i++)
	{
		a[i]=0;
	}
}
void sinhnhiphan(int a[],int n)
{
	incauhinh(a,n);
	int i=n-1;
	while(i>0)
	{
		if(a[i]==1) i--;
		if(a[i]==0)
		{
			a[i]=1;
			datbang0(a,n,i+1);
			incauhinh(a,n);
			i=n-1;
		}
	}
}
int main()
{
	int n;
	cin>>n;
	sinhnhiphan(a,n);
}

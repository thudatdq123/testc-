#include<iostream>
#include<fstream>
using namespace std;
void daycontang(int a[],int n)
{
	int l[100],t[100];
	l[n+1]=1;
	int jmax;
	for (int i=n+1;i>=0;i--)
	{
		jmax=n+1;
		for(int j=i+1;j<=n+1;j++)
		{
			if(a[j]>a[i] && l[j]>l[jmax]) jmax=j;
			l[i]=l[jmax]+1;
			t[i]=jmax;
		}
	}
	int i=0;
	while(i<n)
	{
		cout<<a[t[i]]<<' ';
		i=t[i];
	}
}
int main()
{
	int a[100],n;
	ifstream file;
	file.open("E:\\C++\\daycontang.txt",ios_base::in);
	file>>n;
	for(int i=0;i<n;i++)
	{
		file>>a[i];
	}
	for(int i=n;i>0;i--)
	{
		a[i]=a[i-1];
	}
	a[0]=-10000;a[n+1]=10000;
	daycontang(a,n);
}

#include<iostream>
using namespace std;
void nhap(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
}
void xoa(int a[],int &n,int vt)
{
	for(int i=vt;i<n;i++)
	{
		a[i]=a[i+1];
	}
	n--;
}
void xuli(int a[],int &n)
{
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(a[i]==a[j]) xoa(a,n,j);
		}
	}
}
int main()
{
	int n=10;
	int a[10]={1,2,3,4,5,1,2,4,6,7};
	xuli(a,n);
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<"  ";
	}
}



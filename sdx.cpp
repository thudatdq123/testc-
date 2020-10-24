#include<iostream>
using namespace std;

bool sodx(int n)
{
	int x=n,nguoc=0;
	while(x!=0)	
	{
		nguoc=nguoc*10+x%10;
		x/=10;
	}
	if(nguoc==n)
	{
		return true;
	}else
	{
		return false;
	}
}
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
		if(sodx(a[i])==true) 
		{
			xoa(a,n,i);
			
		}
	}
}
int main()
{
	int n;
	n=15;
	int a[15]={13,22,10001,36,43,51,66,12,33,465,131,213,414,432,3432};
	xuli(a,n);
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
}

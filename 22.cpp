#include<iostream>
using namespace std;

void nhap(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
}

int Match(int a[],int n,int b[],int m)
{
	int bd,d=0,j;
	for(int i=0;i<n;i++)
	{
		if(a[i]==b[0])
		{
			
			for(int j=0;j<=m-1;j++)
			{
				if(a[i+j]==b[j]) d++;
			}
			if(d==m)
			{
				return i;
			}	
		} 	
		d=0;	
	}
	return -1;
}
int main()
{
	int a[100],b[100],n,m;
	cin>>n;
	nhap(a,n);
	cin>>m;
	nhap(b,m);
	cout<<Match(a,n,b,m);
}

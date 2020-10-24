#include<iostream>
using namespace std;
void swap(int &a,int &b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;
}
void A_Index(int a[],int n,int idx[])
{
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				swap(a[i],a[j]);
				swap(idx[i],idx[j]);
			}
		}
	}
	for(int i=0;i<n;i++)
	{
		cout<<idx[i]<<endl;
	}
}
int main()
{
	int a[100],idx[100];
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		idx[i]=i;
	}
	A_Index(a,n,idx);
}

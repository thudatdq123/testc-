#include<iostream>
using namespace std;
void nhap(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
}
void saplaimang(int a[],int n)
{
	int j=0,temp=0;
	for(int i=0;i<n;i++)
	{
		if(a[i]==0)
		{
			
			temp=a[j];
			a[j]=a[i];
			a[i]=temp;
			j++;
		}
	}
	int k=j;
	for(int i=j;i<n;i++)
	{
		if(a[i]<0)
		{
			temp=a[k];
			a[k]=a[i];
			a[i]=temp;
			k++;	
		}	
	}
	int h=k;
	for(int i=k;i<n;i++)
	{
		if(a[i]>0)
		{
			temp=a[h];
			a[h]=a[i];
			a[i]=temp;		
		}		
	}
	for(int i=j;i<k;i++)
	{
		for(int l=i+1;l<k;l++)
		{
			if(a[l]>a[i])
			{
			temp=a[i];
			a[i]=a[l];
			a[l]=temp;
			}
		}
	}
	for(int i=k;i<n;i++)
	{
		for(int l=i+1;l<n;l++)
		{
			if(a[l]<a[i])
			{
			temp=a[i];
			a[i]=a[l];
			a[l]=temp;
			}
		}
	}
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<"  ";
	}
}
int main()
{
	int a[100],n;
	cin>>n;
	nhap(a,n);
	saplaimang(a,n);
}

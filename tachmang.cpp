#include<iostream>
using namespace std;
void nhap(int a[],int n)
{
	for(int i=0;i<n;i++) cin>>a[i];
}
void tachmang(int a[],int b[],int c[],int n)
{	
	int j=0,k=0,l=0;
	for(int i=0;i<n;i++)
	{	
		if(a[i]%2==0)
		{
		 	b[k]=a[i];
		 	k++;
		}else
		{
			c[l]=a[i];
			l++;
		}		
	}
	for(int j=0;j<k;j++)
	{
		cout<<b[j]<<"  ";
	}
	cout<<endl;
	for(int j=0;j<l;j++)
	{
		cout<<c[j]<<"  ";
	}
}
int main()
{
	int n;
	int a[100],b[100],c[100];
	cin>>n;
	nhap(a,n);
	tachmang(a,b,c,n);
	
	return 0;
}

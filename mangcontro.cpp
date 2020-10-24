#include<iostream>
using namespace std;
void nhap(int *a,int n)
{
	for(int i=0;i<5;i++)
	{
		cin>>*(a+i);
	}
}
void xuat(int *a,int n)
{
	for(int i=0;i<5;i++)
	{
		cout<<*(a+i);
	}
}
int main()
{
 	int *a,n;
 	cin>>n;
 	a=new int[n];
 	nhap(a,n);
 	xuat(a,n);
}

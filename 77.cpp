#include<iostream>
using namespace std;
int slxhmax(int a[],int n)// so lan xuat hien max
{
	int d,max=0;
	for(int i=0;i<n;i++)
	{
		d=1;
		for(int j=i+1;j<n;j++)
		{
			if(a[i]==a[j]) d++;
		}
		if(d>max) max=d;		
	}
	return max;
}
int dslxh(int a[],int n,int index) // dem so lan xuat hien
{
	int d=0;
	for(int i=index;i<n;i++)
	{
		if(a[index]==a[i]) d++;
	}
	return d;
}
void A_Count(int a[],int n) // tim phan tu xuat hien nhieu nhat
{
	for(int i=0;i<n;i++)
	{
		if(dslxh(a,n,i)==slxhmax(a,n)) cout<<"phan tu xuat hien nhieu nhat la : "<<a[i]<<" xuat hien "<< slxhmax(a,n)<<" lan "<<endl;
	}
}
int main()
{
	int n=8,a[n]={1,2,3,5,5,8,6,1};
	A_Count(a,n);
}

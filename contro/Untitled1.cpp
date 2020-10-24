#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
void nhap(int *&a,int n);
void xuat(int *a,int n);
void SapXepGiam(int *&a,int n);
int main()
{	
	int *a;
	int n=4;
	nhap(a,n);
	SapXepGiam(a,n);
	xuat(a,n);
}
void nhap(int *&a,int n)
{
	a=new int[n];
	srand(time(NULL));
	for(int i=0;i<n;i++)
	{
		*(a+i)=rand()%(1+100-1)+1;
	}
}
void xuat(int *a,int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<*(a+i)<<"\t";
	}
}
void SapXepGiam(int *&a,int n)
{
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n-1;j++)
		{
			if(*(a+j)>*(a+i))
			{
				int temp=*&(a+i);
				*&(a+i)=*&(a+j);
				*&(a+j)=temp;
			}
		}
	}
}

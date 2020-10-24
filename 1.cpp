#include<iostream>
#include<math.h>
using namespace std;
bool snt(int);
void xoa(int, int, int);
void nhap(int, int);
void xuat(int, int);
void xoasnt(int, int);
void them(int, int, int, int);
void themsnt(int, int, int);
bool snt(int n)
{
	if (n < 2) {
		return false;
	}else if(n==2)
	{
		return true;
	}
	else {
		for (int i = 2; i <= sqrt(n); i++)
		{
			if (n % i == 0) return false;
		}
	}
	return true;
}
void xoa(int a[], int &n,int vtx)
{
	for (int i = vtx; i <n-1; i++) a[i] = a[i + 1];
	--n;
}
void nhap(int a[], int n)
{
	for (int i = 0; i < n; i++) cin >> a[i];
}
void xuat(int a[],int n)
{
	for (int i = 0; i < n; i++) cout << a[i] << "   ";
}
void xoasnt(int a[],int &n)
{
	for (int i = 0; i < n; i++)
	{
		if(snt(a[i])==true)
		{
			xoa(a, n, i);
			--i;
		}
	}
}
void them(int a[], int &n,int vt, int x) 
{
	for (int i = n - 1; i >= vt; i--)
	{
		a[i + 1] = a[i];
	}
	a[vt] = x; // thêm ph?n t? x t?i v? trí vt b?t kì trong m?ng
	n++; // m?ng tang lên 1 ph?n t?
}
void themsnt(int a[],int &n,int x)
{
	for (int i = 0; i < n; i++)
	{
		if(snt(a[i])==true)
		{
			them(a, n, i + 1, x);
		}
	}
}
int main()
{
	int a[10000], n=7,x=1111,vt=7;
	nhap(a, n);
	themsnt(a, n,x);
	xuat(a, n);
	return 0;
}

#include<iostream>
using namespace std;
#define fo(i,a,b) for(int i=a;i<=b;++i)
#define fo1(i,a,b) for(int i=a;i>=b;--i)
int dem=0;
//-------------------------------------------------
void doicho(int& a, int& b)
{
	int tam;
	tam = a;
	a = b;
	b = tam;
}
//------------------------------------------------------------
void solve(int a[],int k,int k1)
{
	if (k == k1)
	{
		++dem;
		fo(j, 1, k1)
		{
			cout << a[j];
		}
		cout << endl;
		return;
	}
	
	fo(i, k, k1)
	{
		swap(a[k], a[i]);
		solve(a, k + 1, k1);
		swap(a[k], a[i]);
		
	}
}
void tinh()
{
	cout << dem;
}
int main()
{
	int n;
	cin >> n;
	int a[10], k = 0;
	while (n > 0)
	{
		a[++k] = n % 10;
		n /= 10;
	}
	solve(a, 1, k);
	tinh();
}

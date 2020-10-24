#include<iostream>
#include<math.h>
using namespace std;
void xuat(unsigned a[],unsigned k)
{
	for (int i = 0; i < k; i++) cout << a[i] << " ";
}
bool kt(int n)
{
	if (n < 2)
	{
		return false;
	}else
	{
		for (int i = 2; i <= sqrt(n); i++)
		{
			if (n % i == 0) return false;
		}
	}
	return true;
}
bool somanhme(int n)
{
	int d = 0, d1 = 0;
	int b[100],j=0;
	for (int i = 2; i <= n; i++)
	{
		if (n%i==0)
		{
			b[j] = i;
			j++;
		}
	}
	for(int i=0;i<j;i++)
	{
		if(kt(b[i])==true)
		{
			d++;
			if (n % (b[i] * b[i]) == 0) d1++;
		}
	}
	cout << d << "  " << d1<<endl;
	if (d == d1) return true;
	return false;
}
bool F1(unsigned a[],unsigned k,unsigned i)
{
	return somanhme(a[i]);
}
void F2(unsigned a[],unsigned k)
{
	for(int i=0;i<k;i++)
	{
		for(int j=i+1;j<k;j++)
		{
			if ((kt(a[i]) == true) && (kt(a[j]) == true) && (a[i] > a[j]))
			{
				int temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	xuat(a, k);
}
int main()
{
	unsigned n=8,i=0;
	unsigned a[8] = {30,36,25,27,64,45,49,70};
	cout <<F1(a,n,i)<<endl;
	F2(a,n);
	
	system("pause");
	return 0;
}

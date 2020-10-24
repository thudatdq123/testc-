#include<iostream>
#include<math.h>
using namespace std;
bool kt(int n)
{
	if (n < 2)
	{
		return false;
	}else
	{
		for (int i = 0; i <= sqrt(n); i++)
		{
			if (n % i == 0) return false;
		}
	}
	return true;
}
bool ktr(int n)
{
	if(n<2)
	{
		return false;
	}else
	{
		for(int i=2;i<=sqrt(n);i++)
		{
		if(n%i==0) return false;
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
			if (n % (b[j] * b[j]) == 0) d1++;
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
int main()
{
	unsigned n=8,i=2;
	unsigned a[8] = { 20,30,36,20,40,45,68,70};
	cout <<ktr(2)<<endl;
	system("pause");
	return 0;
}

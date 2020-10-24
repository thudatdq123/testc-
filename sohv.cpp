#include<iostream>
using namespace std;
void swap(int &a,int &b)
{
	int temp=a;
	a=b;
	b=temp;
}
void sapxep(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				swap(a[i],a[j]);
			}
		}
	}
}
int N_Permutation(unsigned n, unsigned m)
{
	int a[100],b[100],i=0,j=0;
	while(n>0)
	{
		a[i]=n%10;
		n/=10;
		i++;
	}
	while(m>0)
	{
		b[j]=m%10;
		m/=10;
		j++;
	}
	sapxep(a,i);
	sapxep(b,j);
	if(i==j)
	{
		for(int k=0;k<i;k++)
		{
			if(a[k]!=b[k]) return false;
		}
	}else
	{
		return false;
	}
	return true;
}
int main()
{
	int n,m;
	cin>>m>>n;
	cout<<N_Permutation(n,m);
}

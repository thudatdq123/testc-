#include<iostream>
#include<fstream>
using namespace std;
void nhap(int a[],int &n)
{
	ifstream file;
	file.open("E:\\C++\\daycontang.txt",ios_base::in);
	file>>n;
	for(int i=0;i<n;i++) file>>a[i];
}
void p123(int a[],int &n1,int &n2,int &n3)
{
	int n=10,d=0,dmax=0;;
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(a[i]<a[j])
			{
				d++;
				if(d>dmax)
				{
					dmax=d;
				}
			}
		}
		cout<<d<<endl;
		d=0;
	}
	
}
int main()
{
	int n;int a[100],n1,n2,n3;
	nhap(a,n);
	cout<<n<<endl;
	for(int i=0;i<n;i++) cout<<a[i]<<" ";
	p123(a,n1,n2,n3);
}

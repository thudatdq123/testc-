#include<iostream>
#include<fstream>
using namespace std;
int n;
int* a = new int[n];
void nhap(int *a,int &n)
{
	ifstream file;
	file.open(".\\Test.txt.txt",ios_base::in);
	file >> n;
	for (int  i = 0; i < n; i++)
	{
		file >> a[i];
	}
	file.close();
}
void giamdan(int *a,int n)
{
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(a[j]>a[i])
			{
				int temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
}
void tangdan(int* a, int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (a[j] < a[i])
			{
				int temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
}
void xuli(int *a,int n)
{
	for (int  i = 0; i < n; i++)
	{
		if(*(a+i)%2==0)
		{
			giamdan(a, n);
		}else
		{
			tangdan(a, n);
		}
	}
}

int main() 
{
	nhap(a, n);
	xuli(a, n);
	cout<<n<<endl;
	for (int i = 0; i < n; i++)
	{
	cout<< a[i]<<"  ";
	};
	return 0;
}

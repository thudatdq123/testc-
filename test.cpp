#include<iostream>

using namespace std;
void nhap(int a[][100],int m,int n)
{
    for (int i = 0; i < m; i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
	}
}
void xuly(int a[][100],int m,int n)
{
	int s=0;
     for (int i = 0; i < m; i++)
    {
        for(int j=0;j<n;j++)
        {
            s+=a[i][j];
        }
	}
	cout<<s;
}
int main()
{
	int a[100][100];
	int n,m;
	cin >> m>>n;
    nhap(a,m,n);
    xuly(a,m,n);
    
		return 0;
} 



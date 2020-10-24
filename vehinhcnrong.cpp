#include<iostream>
using namespace std;
int main()
{
	int n;
	string s[100][100];
	cin>>n;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
		s[i][j]=' ';
		}
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(i==0||i==n-1)s[i][j]='*';
			
			if(j==0||j==n-1) s[i][j]='*';
			if(i==j) s[i][j]='*';
			if(j+i==n-1) s[i][j]='*';
		}
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout<<s[i][j]<<" ";
		}
		cout<<endl;
	}
}

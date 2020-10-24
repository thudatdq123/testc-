#include<iostream>
using namespace std;
int main()
{ 
	int n;
	cin>>n;
	string s[100][100]; 
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			s[i][j]='*';
		}
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(i<j) s[i][j]=' ';
		}
	}
	for(int i=2;i<n-1;i++)
	{
		for(int j=1;j<n;j++)
		{
			if(i>j) s[i][j]=' ';
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

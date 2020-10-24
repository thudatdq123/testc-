#include<iostream>
using namespace std;
void ve(int h)
{
	for(int i=0;i<h;i++)
	{
		for(int j=0;j<2*h-1;j++)
		{
			if(j==h) 
			{
				cout<<j;
			}
			cout<<" + ";
		}
		cout<<endl;
	}
}
int main()
{
	int h;
	cin>>h;
	ve(h);
}

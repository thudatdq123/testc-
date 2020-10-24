#include<iostream>
using namespace std;
void ham(int b)
{
	for(int i=1;i<b;i++)
	{
		for(int j=1;j<b;j++)
		{
			if(b*b-i*i==j*j)
			{
				cout<<i<<" "<<j;
				cout<<endl;
			}
		}
		
	}
}
int main()
{
	int b,m,n;
	cin>>b;
	ham(b);
return 0;
}

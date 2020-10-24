#include<iostream>
#include<math.h>
using namespace std;
float can(int n)
{
	if(n==1) return sqrt(2);
	return sqrt(2+can(n-1));
}
int main()
{
	int n;
	cin>>n;
	cout<<can(n);
}

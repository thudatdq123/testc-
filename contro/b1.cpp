#include<iostream>
using namespace std;
void hoandoi(float &a,float &b)
{
	float *pa,*pb,temp;
	pa=&a;
	pb=&b;
	temp=*pa;
	*pa=*pb;
	*pb=temp;
}
int main()
{
	float a,b;
	cin>>a>>b;
	hoandoi(a,b);
	cout<<a<< "  "<<b;
	return 0;
}

#include<iostream>
using namespace std;
int main()
{
	int *pa,*pb,temp;
	int a=10,b=5;
	pa=new int;
	pb=new int;
	pa=&a;
	pb=&b;
	temp=*pa;
	*pa=*pb;
	*pb=temp;
	cout<<a<<"   "<<b;
	void *v;
	v=&a;
	(*(int*)v);
	cout<<endl<<(*(int*)v);
	int *l;
	cout<<endl<<*l;
}

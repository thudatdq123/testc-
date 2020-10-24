#include<iostream>
using namespace std;
int a[10]={-1,-2,-3,-4,-5,-6,-7,8,-9,-10};
bool ktsoam(int a[],int n)
{
	a[n]=0;
	int i=0;
	while(a[i]>a[n]) i++;
	if(i<n) return true;
	return false;
}
bool kttoansoam(int a[],int n)
{
	a[n]=0;
	int i=0;
	while(a[i]<a[n]) i++;
		if(i=n-1) return true;
	return false;
}
int kttsa(int a[],int n)
{
	int i=0;
	a[n]=0;
	while(a[i]<a[n]) i++;
	if(i==n) return true;
	return false;
}
int main()
{
	cout<<kttsa(a,10);	
}

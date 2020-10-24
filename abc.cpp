#include<iostream >
using namespace std;
void nhap_mang(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
	cout<<"nhap gia tri a["<<i<<"]=";
	cin>>a[i];
}
	 
} 
void xuat_mang(int a[],int n)
{ 
	for(int i=0;i<n;i++)
	cout<<a[i]<<"  "; 
} 
void giam_nhanh(int a[],int n)
{
	 int g;
	for(int i=0;i<n;i++)
	   {
	      for(int j=i+1;j<n;j++)
	         {
			   if(a[i]<a[j])
		   {
		   	 g=a[i];
			 a[i]=a[j];
			 a[j]=g;	 
		   } 
	         }
	   }
	   	xuat_mang(a,n);
} 
int main()
{
	int n;
	int a[1000];
	cout<<"nhap n=";
	cin>>n; 
	cout<<"nhap mang ";
	nhap_mang(a,n);
	cout<<"xuat mang ";

	cout<<"day giam la ";
	giam_nhanh(a,n);
	return 0; 
} 

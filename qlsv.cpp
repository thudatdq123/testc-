#include<iostream>
#include<string>
using namespace std;
struct sinhvien
{
	string hoten;
	string gioitinh;
	int tuoi;
	float dt,dl,dh;
	float dtb=0;
};
typedef sinhvien sv;
void nhap1sv(sv &a)
{
		fflush(stdin);
		cout<<"\t\t\n Nhap hoten \t\t";
		getline(cin,a.hoten);
		fflush(stdin);
		cout<<"\t\t\n Nhap gioi tinh \t\t ";
		getline(cin,a.gioitinh);
		cout<<"\t\t\n Nhap tuoi \t \t";
		cin>>a.tuoi;
		cout<<"\t\t\n Nhap diem toan \t\t";
		cin>>a.dt;
		cout<<"\t\t\n Nhap diem li \t\t";
		cin>>a.dl;
		cout<<"\t\t\n Nhap diem hoa \t \t";
		cin>>a.dh;
		a.dtb=(a.dl+a.dh+a.dt)/3.0;	
}
void nhapdssv(sv a[],int n)
{
	for(int i=0;i<n;i++)
	{
		nhap1sv(a[i]);
	}
}
void xuat1sv(sv a)
{
		cout<<"\t\t\n Ho ten \t\t";
		cout<<a.hoten<<endl;
		cout<<"\t\t\n gioi tinh \t\t ";
		cout<<a.gioitinh<<endl;
		cout<<"\t\t\n Tuoi \t\t ";
		cout<<a.tuoi<<endl;
		cout<<"\t\t\n Diem toan \t\t ";
		cout<<a.dt<<endl;
		cout<<"\t\t\n Diem li \t\t ";
		cout<<a.dl<<endl;
		cout<<"\t\t\n Diem hoa \t\t ";
		cout<<a.dh<<endl;
		cout<<"\t\t\n Diem TB \t\t ";		
		cout<<a.dtb<<endl;
		cout<<"***********************"<<endl;
}
void xuatdssv(sv a[],int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<"THONG TIN SINH VIEN THU "<<i+1<<" : \n"; 
		xuat1sv(a[i]);
		cout<<"****************************";
	}
}
void swap(float &a,float &b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;
}
void sapxep(sv a[],int n)
{
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(a[i].dtb<a[j].dtb)
			{
				swap(a[i],a[j]);
			}
		}
	}
}
void themsv(sv a[],int &n,int vt,sv x)
{
	cout<<"Nhap vi tri can them \t\t\n";
	cin>>vt;
	nhap1sv(x);
	for(int i=n;i>vt;i--)
	{
		a[i]=a[i-1];
	}
	a[vt]=x;
	n++;
}
void xoasv(sv a[],int &n,int vt)
{
	cout<<"\t\t\n Nhap vi tri can xoa \n";
	cin>>vt;
	for(int i=vt;i<n;i++)
	{
		a[i]=a[i+1];
	}
	n--;
}
int main()
{

	sv a[100],x;
	int n,vt,vt1,chon;	
	cin>>n;
	char h='c';
	while(h=='c')
	{
		cout<<"\t\t*************************************\n";
		cout<<"\t\t\tMoi ban chon chuc nang \n";
		cout<<"\t\t\t 1.Nhap danh sach sinh vien\n";
		cout<<"\t\t\t 2.Xuat danh sach sinh vien\n";
		cout<<"\t\t\t 3.Them sinh vien\n";
		cout<<"\t\t\t 4.Xoa sinh vien\n";
		cout<<"\t\t\t 5.Sap xep SV\n";
		cout<<"\t\t*************************************\n"<<endl;
		cout<<"moi ban chon \n";
		cin>>chon;
		switch(chon)
		{
			case 1:
			{
				nhapdssv(a,n);
				break;
			}
			case 2:
			{
				xuatdssv;
				break;
			}
			case 3:
			{
				themsv(a,n,vt,x);
				break;
			}
			case 4:
			{
				xoasv(a,n,vt1);
				break;
			}
			case 5:
			{
				sapxep(a,n);
				break;
			}
		}
	cout<<"ban muon tiep tuc k c/k ";
	cin>>h;
	if(h=='c') chon=0;
	}
}

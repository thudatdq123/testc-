#include<iostream>
#include<string>
using namespace std;

struct sinhvien
{
	string mssv;
	string ten;
	int std;
	int namsinh;
	float diemtrungbinh;
};
typedef struct sinhvien SV;
void nhap1sv(SV &a)
{
	fflush(stdin);
	cout<<"\t\t\nNhap MSSV :";
	getline(cin,a.mssv);
	fflush(stdin);
	cout<<"\t\t\nNhap ho va ten :";
	getline(cin,a.ten);
	cout<<"\t\t\nNhap so dien thoai :";
	cin>>a.std;
	cout<<"\t\t\nNhap nam sinh :";
	cin>>a.namsinh;
	cout<<"\t\t\nNhap diem trung binh :";
	cin>>a.diemtrungbinh;
}
void xuat1sv(SV a)
{
	cout<<"\t\t\nMSSV " <<a.mssv;
	cout<<"\t\t\nHo va ten : "<<a.ten;
	cout<<"\t\t\nSo dien thoai :"<<a.std;
	cout<<"\t\t\nNam sinh :"<<a.namsinh;
	cout<<"\t\t\nNhap diem trung binh :" <<a.diemtrungbinh;
}
void nhapdssv(SV x[],int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<"\n\t\tNhap sinh vien thu "<<i+1<<endl;
		nhap1sv(x[i]);
		cout<<endl;
	}
}
void sapxep(SV x[],int n)
{
	SV temp;
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(x[i].diemtrungbinh<x[j].diemtrungbinh)
			{
				temp=x[i];
				x[i]=x[j];
				x[j]=temp;
			}
		}
	}
	cout<<"SV diem cao nhat la sinh vien ten : "<<x[0].ten<<endl;
	cout<<"SV diem thap nhat la sinh vien ten :"<<x[n-1].ten<<endl;
}
void sapxeptheoten(SV x[],int n)
{
	cout<<"Sap xep theo ten : \n\n";
	for(int i=0;i<n;i++)
	{
		cout<<i+1<<"."<<x[i].ten<<endl;
	}
}
void sapxeptheomsvadiem(SV x[],int n)
{
	cout<<" Sap xep theo MSSV va Diem Trung Binh : \n\n";
	for(int i=0;i<n;i++)
	{
		cout<<i+1<<"."<<x[i].mssv<<" co diem tb la :"<<x[i].diemtrungbinh<<endl;
	}
}
int main()
{
	SV x[100];
	int n;
	cout<<"\t\tNhap so sinh vien \n";
	cin>>n;
	nhapdssv(x,n);
	sapxep(x,n);
	sapxeptheoten(x,n);
	sapxeptheomsvadiem(x,n);
}

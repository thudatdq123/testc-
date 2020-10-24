#include<iostream>
#include<string>
using namespace std;
struct sinhvien
{
	string ten;
	string mssv;
	int *diem;	
};
typedef struct sinhvien SV;
void nhapsv(SV &x)
{
	fflush(stdin);
	cout<<"Nhap Ten :";
	getline(cin,x.ten);
	fflush(stdin);
	cout<<"Nhap MSSV :";
	getline(cin,x.mssv);
	cout<<"Nhap Diem ";
	cin>>x.diem;
	cout<<"************************"<<endl;
}

void xuatsv(SV x)
{
	cout<<"Ten :";
	cout<<x.ten<<endl;
	cout<<"MSSV : ";
	cout<<x.mssv<<endl;
	cout<<"Diem :";
	cout<<x.diem<<endl;
	cout<<"************************"<<endl;
}
int main()
{
	SV x;
	SV z;
	nhapsv(x);
	z.ten=x.ten;
	z.mssv=x.mssv;
	(*z.diem)=(*x.diem);
	system("cls");
	xuatsv(x);
	xuatsv(z);
}

#include<iostream>
using namespace std;
typedef struct
{
	int day;
	int month;
	int year;
}Date;
typedef struct
{
	char ten[100];
	Date ngaysinh;
	float luong;
}nhanvien;
void xuat(nhanvien a)
{
	cout<<a.ten<<endl;
	cout<<a.ngaysinh.day<<"/"<<a.ngaysinh.month<<"/"<<a.ngaysinh.year<<endl;
	cout<<a.luong;
}
int main()
{
	
nhanvien nv1=
{
	"Tran Thu Dat",
	{12,3,2001},
	1000.0000
};
	xuat(nv1);
}

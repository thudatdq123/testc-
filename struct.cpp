#include<iostream>
#include<string>
using namespace std;
struct sinhvien
{
	string hoten;
	string mssv;
	float diem;
};
typedef struct sinhvien SinhVien;
void nhap(SinhVien &sv)
// không có typedef thì ph?i ghi void nhap(struct sinh vien &sv)
{
	fflush(stdin);//xóa bo nho dem
	cout<<"nhap ho ten sv :";
	getline(cin,sv.hoten);
		fflush(stdin);//xóa bo nho dem
	cout<<"nhap mssv :";
	getline(cin,sv.mssv);
		fflush(stdin);//xóa bo nho dem
	cout<<"nhap diem sv :";
		cin>>sv.diem;
}
void xuat(SinhVien &sv)
//xuat
{

	cout<<"ho ten sv :";
	cout<<sv.hoten<<endl;
		
	cout<<"mssv :";
	cout<<sv.mssv<<endl;
		
	cout<<"diem sv  :";
	cout<<sv.diem;
}

int main()
{
	SinhVien x;// khai bao 1 thang sv x
	cout<<"nhap thong tin sv \n";
	nhap(x);
	cout<<"\n \n ";
	xuat(x);

}

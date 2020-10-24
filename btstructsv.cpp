#include<iostream>
#include<string>
using namespace std;
struct sinhvien
{
	string mssv;
	string ten;
	float diemkt;
	float toanrr;
	float ctdl;
	float dtb=(diemkt+toanrr+ctdl)/3;
};
typedef sinhvien SV;
void nhapsv(SV &x)
{

	do
	{
	fflush(stdin);
	cout<<"Nhap mssv :"<<endl;
	cin>>x.mssv; 
	if(x.mssv.length()>20) cout<<"Vui long nhap lai khong hop le !!!"<<endl;
	}while(x.mssv.length()>20);
	fflush(stdin);
	
	do
	{
	fflush(stdin);
	cout<<"Nhap ten :"<<endl;
	getline(cin,x.ten);
	if(x.ten.length()>30) cout<<" \t\t\t Vui long nhap lai khong hop le !!! "<<endl;
	}while(x.ten.length()>30);
	
	cout<<"Nhap diem ki thuat lap trinh :"<<endl;
	cin>>x.diemkt;
	cout<<"Nhap toan roi rac :"<<endl;
	cin>>x.toanrr;
	cout<<"Nhap CTDL-GT :"<<endl;
	cin>>x.ctdl;
}

void xuatsv(SV x)
{
	cout<<"Mssv :"<<x.mssv<<endl;
	cout<<"Ten :"<<x.ten<<endl;
	cout<<"Diem ki thuat lap trinh :"<<x.diemkt<<endl;
	cout<<"Diem toan roi rac :"<<x.toanrr<<endl;
	cout<<"Diem csdl-gt :"<<x.ctdl<<endl;
}
void xeploaisv(SV x)
{
	float s=(x.diemkt+x.toanrr+x.ctdl)/3;
	if(s<4)
	{
		cout<<"loai yeu !!!"<<endl;
	}else if(s<6.5 && s>=4)
	{
		cout<<"loai TB"<<endl;
	}else if(s>=6.5 && s<8)
	{
		cout<<"loai Kha"<<endl;
	}else if(s>=8 && s<9.8)
	{
		cout<<"loai Gioi"<<endl;
	}else
	{
		cout<<"Xuat sac"<<endl;
	}
}
void sapxepttsv(SV &x,int n)
{
	int temp=0;
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(x.dtb<x[j].dtb)
			{
				temp=x[i];
				x[i]=x[j];
				x[j]=temp;
			}
		}
	}
}
int main()
{
	int n;
	cin>>n;
	SV x[100];
	for(int i=0;i<n;i++)
	{
		nhapsv(x[i]);
	}
		sapxepttsv(x,int n);
		system("cls");
	for(int i=0;i<n;i++)
	{
		xuatsv(x[i]);
		xeploaisv(x[i]);
	}

}

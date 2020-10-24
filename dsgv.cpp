#include<iostream>
using namespace std;
struct dsgv
{
	int magv;
	string hoten;
	string makhoa;
};
typedef struct dsgv gv;
void nhap1gv(gv &x)
{
	cout<<"nhap ma giang vien :\n";
	cin>>x.magv;
	do
	{
		fflush(stdin);
		cout<<"nhap ho ten : \n";
		getline(cin,x.hoten);
		if(x.hoten.length()>50) cout<<" Khong hop le , vui long nhap lai !!! \n";		
	}while(x.hoten.length()>50);
	
	do
	{
		fflush(stdin);
		cout<<"nhap ma khoa \n";
		getline(cin,x.makhoa);		     
		if(x.makhoa.length()>10) cout<<" Khong hop le , vui long nhap lai !!!";
	}while(x.makhoa.length()>10);
}
void xuatgv(gv x)
{
	cout<<"Ma GV la : \n"<<x.magv<<endl;
	cout<<"Ho ten GV la : \n"<<x.hoten<<endl;
	cout<<"Khoa cua GV la : \n"<<x.makhoa<<endl;	
	cout<<"************************";
}
void nhapdanhsachgv(gv x[],int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<"\n\n\t\t Nhap thong tin gv thu "<<i+1<<endl;
		nhap1gv(x[i]);
	}
}
void xuatdanhsachgv(gv x[],int n)
{
	for(int i=0;i<n;i++)
	{
		xuatgv(x[i]);
		cout<<endl;
	}
}
void timgv(gv x[],int n,int ma)
{
	for(int i=0;i<n;i++)
	{
		if(x[i].magv==ma)
		{
		xuatgv(x[i]);
		cout<<"\n\n";
		} 
	}
}
void them1gv(gv x[],int &n,int vt,gv x1)
{
	nhap1gv(x1);
	for(int i=n;i>vt;i--)
	{
		x[i]=x[i-1];
	}
	x[vt]=x1;
	n++;
}
void xoa1gv(gv x[],int &n,int vt,gv x2)
{
	char c='c';
	while(c='c')
	{
		for(int i=vt;i<n;i++)
		{
		x[i]=x[i+1];
		}
		n--;
		cout<<"Ban muon xoa nua k c/k";
		cin>>c;
	}
	
}
void swap(int &a,int &b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;
}
void sapxep(gv x[],int n)
{
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(x[i].magv<x[j].magv) swap(x[i],x[j]);
		}		
	}
}
int main()
{
	gv x[100],x1,x2;
	int n,ma,vt,vt1;
	cout<<"\n\t\t nhap so gv : \n";
	cin>>n;
	nhapdanhsachgv(x,n);
	cout<<"\n\n\t\t nhap vi tri can them \n";
	cin>>vt;
	them1gv(x,n,vt,x1);
	sapxep(x,n);
	system("cls");
	xuatdanhsachgv(x,n);
	cout<<"\n\n\t\t nhap vi tri can xoa \n";
	cin>>vt1;
	xoa1gv(x,n,vt1,x2);
	system("cls");
	xuatdanhsachgv(x,n);
}

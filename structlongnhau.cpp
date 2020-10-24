#include<iostream>
using namespace std;
struct toado
{	
	int x;
	int y;
};
typedef struct toado ToaDo;
struct tamgiac
{
	ToaDo a;
	ToaDo b;
	ToaDo c;
};
typedef tamgiac tg;

void nhaptoado(ToaDo &a)
{
	cout<<"Nhap toa do x : ";
	cin>>a.x;
	cout<<"Nhap toa do y : ";
	cin>>a.y;
}
void xuattoado(ToaDo a)
{
	cout<<"( "<<a.x<<" ; "<<a.y<<" )"<<endl;
}
void nhaptg(tg &t1)
{
	cout<<"nhap tam giac 1 : "<<endl<<"nhap canh a :";
	nhaptoado(t1.a);
	cout<<"nhap canh b :"<<endl;
	nhaptoado(t1.b);
	cout<<"nhap canh c :"<<endl;
	nhaptoado(t1.c);
}
void xuattg(tg t1)
{
	cout<<"canh a co toa do : "<<endl;
	xuattoado(t1.a);
	cout<<"canh b co toa do : "<<endl;
	xuattoado(t1.b);
	cout<<"canh c co toa do : "<<endl;
	xuattoado(t1.c);
}
int main()
{
	tg a;
	nhaptg(a);
	system("cls");
	xuattg(a);
}

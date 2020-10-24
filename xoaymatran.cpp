#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	int n,a[100][100];
	fstream file;
	file.open("E:\\C++\\test.txt",ios_base::in);
	if(file.fail()==true)
	{
		cout<<"khong ton tai";
	}
	file>>n;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			file>>a[i][j];
		}
	}
	ofstream fileOut;
	fileOut.open("E:\\C++\\testout.txt",ios_base::out);
	for(int j=0;j<n;j++)
	{
		for(int i=n-1;i>=0;i--)
		{
			fileOut<<a[i][j]<<" ";
		}
		fileOut<<endl;
	}
	file.close();
}

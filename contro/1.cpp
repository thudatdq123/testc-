#include<iostream>
using namespace std;
int main(){
	
	int *arr;
	int x[4]={0,1,2,3};
	arr=&x[0];
	cout<<x<<"  "<<&x;
	return 0;
}

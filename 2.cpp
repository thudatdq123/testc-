#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;
int main()
{
	srand(time(NULL));
	int res=rand()%5+1;
	cout<<res;
}

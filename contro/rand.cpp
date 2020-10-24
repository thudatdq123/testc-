#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
int main()
{
	srand(time(NULL));
	int res=rand()%(100-1+1)+1;
	cout<<res;
}

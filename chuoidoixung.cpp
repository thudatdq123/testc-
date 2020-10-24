#include<iostream>
#include<string>
using namespace std;
bool ktra(string s)
{
	for(int i=0;i<s.length()/2;i++)
	{
		cout<<s[i]<<"  "<<s[s.length()-i]<<endl;
		if(s[i]!=s[s.length()-i-1]) return false;
	}	
	return true;
}
int main()
{
	string s;
	cin>>s;
	cout<<ktra(s);
}

#include<iostream>
using namespace std;
int main()
{
	int a,b;
	cin>>a>>b;
	cout<<"before swapping a="<<a<<"and b="<<b<<endl;
	a=a^b;
	b=a^b;
	a=a^b;
	cout<<endl<<"after swapping a="<<a<<"and b="<<b;
	return 0;
}

#include<iostream>
using namespace std;
int main()
{
	int n1,n2,n3,max;
	cout<<endl<<"enter three numbers: ";
	cin>>n1>>n2>>n3;
	max=(n1>n2)?((n1>n3)?n1:n3):((n2>n3)?n2:n3);
	cout<<endl<<"the maximum is: "<<max;
	return 0;
}

#include<iostream>
using namespace std;
int main()
{
	int n1,n2;
	cout<<"Enter first number: "<<endl;
	cin>>n1;
	cout<<"Enter second number: "<<endl;
	cin>>n2;
	int gcd;
	do
	{
		gcd=n1%n2;
		n1=n2;
		n2=gcd;
	}
	while(n2!=0);
	cout<<"the greatest common divisor is: "<<n1<<endl;
	return 0;
}

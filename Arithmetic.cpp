#include<iostream>
using namespace std;
int main()
{
	int x,y,sum,difference,product,modulo;
	float quotient;
	cout<<"Enter the first number: "<<endl;
	cin>>x;
	cout<<"Enter the second number: "<<endl;
	cin>>y;
	sum=x+y;
	difference=x-y;
	product=x*y;
	modulo=x%y;
	quotient=(float)x/y;
	cout<<endl<<"sum="<<sum;
	cout<<endl<<"difference="<<difference;
	cout<<endl<<"product="<<product;
	cout<<endl<<"modulo="<<modulo;
	cout<<endl<<"quotient="<<quotient;
	return 0;
}

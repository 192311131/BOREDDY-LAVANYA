#include<iostream>
using namespace std;
int main()
{
	int num1,num2,max;
	cout<<endl<<"Enter the two numbers";
	cin>>num1>>num2;
	max=(num1>num2)?num1:num2;
	cout<<endl<<"the greater of two is"<<max;
	return 0;
}

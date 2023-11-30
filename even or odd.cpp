#include<iostream>
using namespace std;
int main()
{
	int num;
	cout<<"Enter the integer: "<<endl;
	cin>>num;
	if(num%2==0)
	{
		cout<<endl<<"The integer is even";
	}
	else
	{
		cout<<endl<<"The integer is odd";
	}
	return 0;
}

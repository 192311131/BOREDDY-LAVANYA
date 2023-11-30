#include<iostream>
using namespace std;
int main()
{
	int num;
	cout<<"Enter an integer: "<<endl;
	cin>>num;
	if(num>0)
	{
		cout<<endl<<"Integer is positive";
	}
	else if(num<0)
	{
		cout<<endl<<"Integer is negative";
	}
	if(num=0)
	{
		cout<<endl<<"Integer is zero";
	}return 0;
}

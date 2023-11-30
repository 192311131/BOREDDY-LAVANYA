#include<iostream>
using namespace std;
int main()
{
	int size;
	cout<<"Enter size of array"<<endl;
	cin>>size;
	int*arr=new int[size];
	cout<<"Enter values for array"<<endl;
	for(int i=0;i<size;i++)
	{
		cin>>arr[i];
	}
	cout<<endl<<"Values in array";
	for(int i=0;i<size;i++)
	{
		cout<<arr[i]<<" ";
	}
	return 0;
}

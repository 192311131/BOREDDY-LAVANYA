#include<iostream>
using namespace std;
int main()
{
	int arr[100],i,size,sum;
	float average;
	cout<<endl<<"Enter number of elements";
	cin>>size;
	cout<<"Enter elements"<<endl;
	for(i=0;i<size;i++)
	{
		cin>>arr[i];
	}
	for(i=0;i<size;i++)
	{
		sum=sum+arr[i];
	}
	average=(float)sum/size;
	cout<<endl<<"The average is "<<average;
	return 0;
}

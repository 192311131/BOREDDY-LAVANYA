#include<iostream>
using namespace std;
int main()
{
	int i,n,j;
	cout<<"number of rows"<<endl;
	cin>>n;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			cout<<i;
		}
		cout<<endl;
	}
	return 0;
}

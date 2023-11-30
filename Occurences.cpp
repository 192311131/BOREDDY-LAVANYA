#include<iostream>
using namespace std;
int main()
{
	int arr[]={1,2,3,1,2,44};
	int n,i;
	n=sizeof(arr)/sizeof(arr[0]);
	int occurence[100]={0};
	for(i=0;i<n;i++)
	occurence[arr[i]]++;
	cout<<"elements"<<" "<<"frequency"<<endl;
	for(i=0;i<100;i++)
	{
		if(occurence[i]>0)
		{
			cout<<i<<"  "<<occurence[i]<<endl;
		}
	}
	return 0;
}

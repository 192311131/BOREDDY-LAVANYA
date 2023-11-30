#include<iostream>
using namespace std;
int main()
{
	int num,i,rem,sum=0;
	cout<<"Enter a number: "<<endl;
	cin>>num;
	for(i=1;i<num;i++)
	{
		rem=num%i;
		if(rem==0)
		{
			sum=sum+i;
		}
	}
	if(sum==num)
	cout<<"Perfect number"<<endl;
	else
	cout<<"Not perfect number"<<endl;
	return 0;
}

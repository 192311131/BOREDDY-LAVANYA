#include<iostream>
using namespace std;
int main()
{
	int num,i,chk=0;
	cout<<"Enter a number: ";
	cin>>num;
	for(i=2;i<num;i++)
	{
		if(num%i==0)
		{
			chk++;
			break;
		}
	}
	if(chk==0)
	cout<<"It is prime number"<<endl;
	else
	cout<<"It is not prime number"<<endl;
	return 0;
}

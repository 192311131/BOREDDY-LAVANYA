#include<iostream>
using namespace std;
class largest
{
	private:
		int n1,n2,n3;
		public:
			void read()
			{
			cout<<"Enter three numbers"<<endl;
			cin>>n1>>n2>>n3;
		    }
		    void print();
};
void largest::print()
{
	if(n1>n2&&n1>n3)
	{
		cout<<"n1 is largest"<<endl;
	}
	else if(n2>n1&&n2>n3)
	{
		cout<<"n2 is largest"<<endl;
	}
	else
	{
		cout<<"n3 is largest"<<endl;
	}
}
int main()
{
	largest l;
	l.read();
	l.print();
}

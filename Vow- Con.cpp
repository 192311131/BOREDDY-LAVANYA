#include<iostream>
using namespace std;
int main()
{
	char c;
	cout<<endl<<"Enter the character: ";
	cin>>c;
	if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
	cout<<endl<<"it is a vowel";
	else
	cout<<endl<<"it is a consonant";
	return 0;
}

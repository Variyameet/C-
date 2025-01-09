//enter three num check largest number using logical operator


#include<iostream>
using namespace std;

int main()
{

	int a,b,c;

    cout<<"enter a";
	cin>>a;

	cout<<"enter b";
	cin>>b;

	cout<<"enter c";
	cin>>c;

	if(a>b && a>c)
	{
		cout<<" a"<<a<<" is largest";
	}
	else
	{
		if(b>c)
		{
			cout<<" b"<<b<<"is largest";
		}
		else
		{
			cout<<"c"<<c<<" is largest";
		}
	}
	return 0;
}

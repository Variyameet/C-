//  elseif

#include<iostream>
using namespace std;

int main()
{
	int a=10,b=20,c=30;

	if(a>b &&  a>c)
	{
		cout<<"a is max";
	}
	else if(b>c)
	{
		cout<<"b is max";
	}
	else
	{
		cout<<"c is max";
	}
	return 0;
}


//check number positive ,nagitive or 0

#include<iostream>
using namespace std;

int main()
{
	int num;

	cout<<"enter the num";
	cin>>num;

	if(num>=0)
	{
		if(num==0)
		{
			cout<<"num is zero";
		}
		else
		{
		    cout<<"num is positive";
		}
	}
	else
	{
		cout<<"num is nagative";
	}

	return 0;
}

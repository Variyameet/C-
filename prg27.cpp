// check user is avilable for voat or not

#include<iostream>
using namespace std;

int main()
{
	int age;

    cout<<"enter the age";
	cin>>age;

	if(age>=18)
	{
		cout<<"eligible for voat";
	}
	else
	{
		cout<<"not eligible for voat";
	}
	return 0;
}

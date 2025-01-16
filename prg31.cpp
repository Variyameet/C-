//condition check

#include<iostream>
using namespace std;

int main()
{
	int x,y;

	cout<<"enter the x";
	cin>>x;
	cout<<"enter the y";
	cin>>y;

	if(x<2000 || x>3000)
	{
		cout<<"\n x";
	}
	if(y>=100 && y<=500)
	{
		cout<<"\ny";
	}
	return 0;
}

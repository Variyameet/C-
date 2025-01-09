// charges of unites

#include<iostream>
using namespace std;

int main()
{
	int unit;
	float charg,tcharg;


	cout<<"enter the unit";
	cin>>unit;

	if(unit<=100)
		{
		charg=50+(unit*0.60);
		cout<<"charg is :"<<charg;


		}
	else
	{

		if(unit>100 && unit<=300)
		{
		charg=50+(unit*0.80);
		cout<<"charg is :"<<charg;


		}
		else
		{


			charg=50+(unit*0.90);
			cout<<"charg is :"<<charg;
		}
	}

		if(charg>=300)
		{
			tcharg=charg*1.15;
			cout<<"\n total 15per charg after 300 unit"<<tcharg;
		}




	return 0;
}





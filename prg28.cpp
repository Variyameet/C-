//calculate the salary

#include<iostream>
using namespace std;

int main()
{
	float sal,totlsal,hra,da;

	cout<<"enter the sal";
	cin>>sal;

	if( sal<5000)
	{
		hra=sal*8/100;
		da=sal*20/100;
		totlsal=sal+hra+da;

		cout<<"totle salary : "<<totlsal;
	}
	else
	{

		if(sal<=5000 && sal<10000)
		{
			hra=sal*12/100;
			da=sal*30/100;
			totlsal=sal+hra+da;

            cout<<"totle salary : "<<totlsal;
		}
		else
		{
			if(sal<=10000 && sal<15000)
			{
				hra=sal*15/100;
				da=sal*40/100;
				totlsal=sal+hra+da;

				cout<<"totle salary : "<<totlsal;
			}
			else
			{
				//if( sal>=15000)
				//{
				hra=sal*20/100;
				da=sal*50/100;
				totlsal=sal+hra+da;

				cout<<"totle salary : "<<totlsal;
				//}
			}
		}
	}
		return 0;
}

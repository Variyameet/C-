//grade to marks of student

#include<iostream>
using namespace std;

int main()
{

	int s1,s2,s3;
	float total,per;

	cout<<"enter the sub1 marks";
	cin>>s1;

	cout<<"enter the sub2 marks";
	cin>>s2;

	cout<<"enter the sub3 marks";
	cin>>s3;

	total=s1+s2+s3;
	cout<<"\ntotal of marks is"<<total;
	per=total/300*100;
	cout<<"\npersentage :"<<per;

	if(per>75)
	{
		cout<<"\nA grade";
	}
	else
	{
		if(per>60 && per<=75)
		{
			cout<<"\nB grade";
		}
		else
		{
			if(per>60 && per<=45)
			{
				cout<<"\nc grade";
			}
			else
			{
				if(per>45 && per<=35)
				{
					cout<<"\nD grade";
				}
				else
				{
					//if(per<35)
					//{
					cout<<"\nfail";
					//}
				}
			}
		}
	}
	return 0;
}

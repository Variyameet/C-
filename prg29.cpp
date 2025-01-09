//tax slab
#include<iostream>
using namespace std;

int main()
{
 float tax=0,income;

 cout<<"Enter the income : \n";
 cin>>income;

 if(0<=income && income<=2500)
 {
  tax=tax+(0*(income-0));
  cout<<"The tax you have to pay will be :\n"<<tax;
 }
 else
 {
  if(2500<income && income<=5000)
  {
   tax=tax+(0.1*(income-2500));
   cout<<"The tax you have to pay will be :\n"<<tax;
  }
  else
  {
   if(5000<income && income<=10000)
   {
    tax=tax+(0.2*(income-5000));
    cout<<"The tax you have to pay will be :\n"<<tax;
   }
   else
   {
    tax=tax+(0.3*(income-10000));
    cout<<"The tax you have to pay will be :\n"<<tax;
   }
  }
 }

 return 0;
}

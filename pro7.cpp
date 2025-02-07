// constructur over loading

#include<iostream>
using namespace std;

class sum
{
    public:

    sum(int a,int b)
    {
        cout<<"\n int a+b : "<<a+b;
    }

    sum(double a,double b)
    {
        cout<<"\n double a+b :"<<a+b;
    }

    sum(int a, int b, int c)
    {
        cout<<"\n int a+b+c : "<<a+b+c;
    }

    sum(int a,float b,double c)
    {
        cout<<"\n comb a+b+c  :"<<a+b+c;
    }

};
int main()
{
    sum prob1(10,20),prob2(10.10,20.10),prob3(10,20,30),prob4(10,20.10,30.4);

    return 0;
}

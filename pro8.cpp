// function over-loading

#include<iostream>
using namespace std;

class sum
{
    public:

    void dosum(int a,int b)
    {
        cout<<"\n int a+b : "<<a+b;
    }

    void dosum(double a,double b)
    {
        cout<<"\n double a+b :"<<a+b;
    }

    void dosum(int a, int b, int c)
    {
        cout<<"\n int a+b+c : "<<a+b+c;
    }

    double dosum(int a,float b,double c)
    {
        return a+b+c;
    }

};
int main()
{
    sum prob;

    prob.dosum(10,20);
    prob.dosum(10.20,20.10);
    prob.dosum(10,20,30);
    cout<<"\n comb a+b+c : "<<prob.dosum(10,20.5,10.20);
    return 0;
}

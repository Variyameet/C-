//  use of constructor

#include<iostream>
using namespace std;

class Arith
{
    int a,b;//by default private
    public:

    Arith()
    {
        a=0,b=0;
    }

    Arith(int x,int y)
    {
        a=x;
        b=y;
    }
    void set_a()
    {
        cout<<"enter the a :";
        cin>>a;
    }
     void set_b()
     {
       cout<<"enter the b :";
        cin>>b;
    }
    int getData_a()
    {
        return a;
    }
    int getData_b()
    {
        return b;
    }
     int doSum()
     {

         return getData_a()+getData_b();
     }

};
int main()
{
    Arith prob1(50,20);
    prob1.set_b();
    cout<<"\n a : "<<prob1.getData_a();
    cout<<"\n b : "<<prob1.getData_b();
    cout<<"\n sum : "<<prob1.doSum();

    return 0;
}

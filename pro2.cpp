//  class

#include<iostream>
using namespace std;

class Arith
{
    int a,b;//by default private
    public:
    void setData()
    {
        cout<<"enter the a :";
        cin>>a;

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
    // int doSum()
    // {
           return 0;
    //     return getData_a()+getData_b();
    // }
    int doless()
    {
        return getData_a()-getData_b();
    }
    int domul()
    {
         return getData_a()*getData_b();
    }
    int dodiv()
    {
        return getData_a()/getData_b();
    }
};
int main()
{
    Arith prob1;
    prob1.setData();
    cout<<"\n a : "<<prob1.getData_a();
    cout<<"\n b : "<<prob1.getData_b();
    // cout<<"\n sum : "<<prob1.doSum();
    cout<<"\n sub : "<<prob1.doless();
    cout<<"\n mul : "<<prob1.domul();
    cout<<"\n div : "<<prob1.dodiv();
    return 0;
}

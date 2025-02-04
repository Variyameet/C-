//  class

#include<iostream>
using namespace std;

class Arith
{
    int a=10,b=20;//by default private
    public:
    void doSum()
    {
        cout<<"\n a+b :"<<a+b;
    }
};
int main()
{
    Arith prob1;
    prob1.doSum();
    return 0;
}

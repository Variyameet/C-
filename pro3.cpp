// constructor : defualt
//               peramiterize

#include<iostream>
using namespace std;

class Arith
{
    int a,b;

    public:

    Arith()//defualt constructor
    {
        cout<<"defualt constructor called";
    }

    Arith(int x,int y)
    {
        a=x;
        b=y;
    }

    int get_a()
    {
        return a;

    }

    int get_b()
    {
        return b;
    }
};

int main()
{

    Arith obj1(10,20),obj2(30,40);

    cout<<"\n obj1 a:"<<obj1.get_a()<<"\t obj1 b:"<<obj1.get_b();
    cout<<"\n obj2 a:"<<obj2.get_a()<<"\t obj2 b:"<<obj2.get_b();

    return 0;
}

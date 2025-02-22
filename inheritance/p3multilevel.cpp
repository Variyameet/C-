// inheritance with constructor or destructor
#include<iostream>
using namespace std;

class A
{
    public:
    A()
    {
        cout<<" \n constructor A ";
    }
    ~A()
    {
        cout<<" \n destructor A ";
    }
};

class B : public A
{
    public:
     B()
    {
        cout<<" \n constructor B";
    }
    ~B()
    {
        cout<<" \n destructor B ";
    }

};

class C : public B
{
    public:
     C()
    {
        cout<<" \n constructor C";
    }
    ~C()
    {
        cout<<" \n destructor C ";
    }

};
int main()
{

    C c;
}

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

class C : public A
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

class D : public B,C
{
    public:
    D()
    {
        cout<<"\n constructor D ";
    }
    ~D()
    {
        cout<<"\n destructor D ";
    }
};
int main()
{
    D d;
}

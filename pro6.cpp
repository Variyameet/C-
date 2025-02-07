// 3 consept : -    this keyword
//                  objct as argunment
//                  object as retuen

#include<iostream>
using namespace std;
class test
{
    int a,b;
    public:
    test(){}
    test(int a,int b)
    {
        this->a = a;//(.*)
        this->b = b;
    }
    void print()
    {
        cout<<"\n a : "<<a<<"\t b : "<<b;
    }
    test doSum(test obj1, test obj2)
    {
        test obj3;
        // cout<<"\n obj1 a :"<<obj1.a<<"\t obj1 b :"<<obj1.b;
        // cout<<"\n obj2 a :"<<obj1.a<<"\t obj2 b :"<<obj1.b;
        obj3.a = obj1.a+obj2.a;
        obj3.b = obj1.b+obj2.b;
        return obj3;
    }
};
int main()
{
    test t1(10,20),t2(20,30),t3;
    t1.print();
    t2.print();
    t3=t3.doSum(t1,t2);
    t3.print();

return 0;
}

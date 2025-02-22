// simple inheritance with account and add bonus
#include<iostream>
using namespace std;

class Account
{

    public:
     int salary;

    void set_salary(int sal)
    {
        salary=sal;
    }
    int get_salary()
    {
        return salary;
    }
};

class programer : public Account
{
    int bouns;
    public:

    void raised_bonus()
    {
        salary=salary*1.1;
    }
};
int main()
{
    programer p1;
    p1.set_salary(50000);
    cout<<"salary :"<<p1.get_salary()<<endl;
    cout<<"give bonus : ";
    p1.raised_bonus();
    cout<<"salary : "<<p1.get_salary()<<endl;
    return 0;
}

//static variable
#include<iostream>
using namespace std;
class Account
{
    int accno,accbal;
    public:
    static int count;
    Account(int accno,int accbal)
    {
        this->accno=accno;
        this->accbal=accbal;
        count++;
    }
    int getcount()
    {
        return count;
    }
};
int Account::count = 0;
int main()
{
    Account a(1111,1000),b(1112,2000),c(1113,3000),d(1114,4000);
    cout<<a.getcount();

    return 0;
}

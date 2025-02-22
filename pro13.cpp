// COPY constructor

#include<iostream>
using namespace std;

class account
{
    int accbal;
    public:

    account(int accbal)
    {
        this-> accbal=accbal;
    }

    account(account & saif) // copy constructor
    {
        accbal=saif.accbal;
    }

    void showacc()
    {
        cout<<"\n acc bal :" <<accbal;
    }

};
int main()
{
    account saif(3000),utsav(saif);
    saif.showacc();
    utsav.showacc();

    return 0;
}

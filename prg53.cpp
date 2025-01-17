// total 2+4+6+....=30
#include<iostream>
using namespace std;

int main()
{
    int i,total=0;
    for(i=0;i<=10;i+=2)
    {
        cout<<i;
        total=total+i;
    }
    cout<<"="<<total;
    return 0;
}

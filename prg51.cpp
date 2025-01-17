// total 1,2,3... =55
#include<iostream>
using namespace std;
int main()
{
    int i,total=0;
    for(i=1;i<=10;i++)
    {
        cout<<i;

        total=total+i;
    }
    cout<<"="<<total;
    return 0;
}

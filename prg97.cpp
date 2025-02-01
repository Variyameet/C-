//print total 1,2,3...=55 whith while loops
#include<iostream>
using namespace std;

int main()
{
int i,total=0;

i=1;
    while(i<=10)
    {
    cout<<i;

    total=total+i;
      i++;
    }
     cout<<"="<<total;
    return 0;
}

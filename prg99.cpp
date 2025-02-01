//print 2  6  8   =30.... whith    while loops
#include<iostream>
using namespace std;
int main()
{
int i,total=0;

i=0;
  while(i<=10) {
    cout<<i;
    total=total+i;
    i+=2;
    }
    cout<<"="<<total;
    return 0;
}

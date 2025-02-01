//print 1  3   5  =25.... whith do   while loops
#include<iostream>
using namespace std;

int main()
{
int i,total=0;

i=1;
  do {
    cout<<i;
    total=total+i;
    i+=2;
    } while(i<=10);
    cout<<"="<<total;
    return 0;
}

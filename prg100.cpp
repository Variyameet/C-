//print 5*1=5   5*2=10   5*3=15. whith do   while loops
#include<iostream>
using namespace std;

int main()
{
int i,total=0,n;

cout<<"entr the n ";
cin>>n;
i=1;
  do {
    total=n*i;
    cout<<int(n)<<"*"<<int(i)<<"="<<int(total)<<"\n";
    i++;

    } while(i<=10);

    return 0;
}

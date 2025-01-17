// total 5*1=5
//       5*2=10
#include<iostream>
using namespace std;

int main()
{
    int i,total=0,n;
    cout<<"enter the no";
    cin>>n;
    for(i=1;i<=10;i++)
    {
        total=n*i;
        cout<<"\n"<<int(n)<<"*"<<int(i)<<"="<<int(total);

    }
    return 0;
}

//febonaci series
#include<iostream>
using namespace std;

int main()
{
    int no,n1=0,n2=1,n3,i;

    for(i=1;i<=10;i++)
    {
        n3=n1+n2;
        cout<<"\t"<<n3<<"\t";

        n1=n2;
        n2=n3;
    }
    return 0;

}



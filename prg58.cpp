//1,4,12,32,80
//logic 1*1=1
//      2*2=4
//      4*3=12
//      8*4=32
#include<iostream>
using namespace std;

int main()
{
    int i,j=1,to;


    for(i=1;i<=24;i*=2)
    {
        to=i*j;
        cout<<"\t"<<int(to)<"\t";
        j++;


    }
    return 0;
}



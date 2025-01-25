/*
    A
    B A
    C B A
    D C B A
    E D C B A

*/

#include<iostream>
using namespace std;

int main()
{
    int i,j;

    for(i=1;i<=5;i++)
    {
        for(j=i;j>=1;j--)
        {

            cout<<char(j+64);

        }
        cout<<"\n";
    }
    return 0;
}

/*      11 12 13 14 15
        21 22 23 24 25
        31 32 33 34 35
        41 42 43 44 45
        51 52 53 54 55
*/

#include<iostream>
using namespace std;

int main()
{
    int i,j,a=11;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {

           cout<<"\t"<<a;
            a++;
        }
        cout<<"\n";
        a=a+5;
    }
    return 0;
}

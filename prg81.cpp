/*
    a
    b C
    d E f
    g H i J
    k L m N o
*/
#include<iostream>
using namespace std;
int main()
{
    int i,j,ch=65;
    for(i=1;i<=5;i++)
    {

            for(j=1;j<=i;j++)
            {
            if(j%2==0)
             {
            cout<<char(ch);
            ch++;

            }
            else{
                cout<<char(ch+32);
                ch++;
            }

        }
        cout<<"\n";

    }
    return 0;
}

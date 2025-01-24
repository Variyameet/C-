/*A
b c
D E F
g h i j
K L M N o
*/
#include<iostream>
using namespace std;

int main()
{
    int i,j,ch=65;
    for(i=1;i<=5;i++)
    {
        if(i%2!=0)
        {
            for(j=1;j<=i;j++)
            {
            cout<<char(ch);
            ch++;
            }
        }
        else
        {
             for(j=1;j<=i;j++)
            {
            cout<<char(ch+32);
            ch++;
            }

        }
        cout<<"\n";

    }
    return 0;
}

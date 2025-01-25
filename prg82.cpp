  /*A
    B C
    D E F
    G H I J
    K L M N O
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
           cout<<char(ch);
            ch++;
        }
        cout<<"\n";
    }
    return 0;
}

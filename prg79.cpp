/*
    A
    A B
    A B C
    A B C D
    A B C D E
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

        ch=65;
      cout<<"\n";
    }
    return 0;
}

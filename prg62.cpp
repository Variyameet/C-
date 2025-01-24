//A c E g......
#include<iostream>
using namespace std;
int main()
{
    int i,t=0;
    char c='A';
    for(i=0;i<=13;i++)
    {
        if(t==0)
        {
            cout<<char(c)<<"\t";
            t=1;
        }
        else
        {
            c=c+32;
           cout<<char(c)<<"\t";
            c=c-32;
            t=0;
        }
        c=c+2;
    }
    return 0;
}

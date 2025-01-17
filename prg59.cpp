//A C E  G

#include<iostream>
using namespace std;

int main()
{
    char c;
    char  n;

    cout<<"enter the char:";
    cin>>n;

    for(c=64;c<=n;c++)
    {
        if(c%2==1)
        {

        cout<<"\t"<<char(c)<<"\t";
        }
    }
    return 0;

}

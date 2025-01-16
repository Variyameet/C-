// enter char transfer to small or capital

#include<iostream>
using namespace std;

int main()
{
    char ch;
    cout<<"enter the charcter";
    cin>>ch;

    if(ch>=65 && ch<=90)
    {
        cout<<"ans is"<<char(ch+32);
    }
    else if(ch>97 && ch<=122)
    {
       cout<<"ans is"<<char(ch-32);

    }
    return 0;
}

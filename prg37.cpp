// ASCII VALUE , char,type casting
//A-65 Z-97
//  32
//a-97  z-97

#include<iostream>
using namespace std;

int main()
{
    /*
    char ch='A',ch1='Z',ch2='a';
    int ch3=122;
    cout<<"\n char :"<<char(ch)<<"-value:"<<int(ch);
    cout<<"\n char :"<<char(ch1)<<"-value:"<<int(ch1);
    cout<<"\n char :"<<char(ch2)<<"-value:"<<int(ch2);
    cout<<"\n char :"<<char(ch3)<<"-value:"<<int(ch3);
    */
    char ch='A';
     cout<<"\n char :"<<char(ch)<<"-value:"<<int(ch);
    cout<<"\n char :"<<char(ch+25)<<"-value:"<<int(ch+25);
   cout<<"\n char :"<<char(ch+32)<<"-value:"<<int(ch+32);
   cout<<"\n char :"<<char(ch+25+32)<<"-value:"<<int(ch+25+32);
    return 0;
}


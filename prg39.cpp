
//consol and vovel
#include<iostream>
using namespace std;

int main ()
{
    char ch;
    cout<<"enter the char :";
    cin>>ch;

    if( ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'|| ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
    {
        cout<<" wovel "<<char(ch);
    }
    else
    {
        cout<<" console "<<char(ch);
     }
        return 0;

}

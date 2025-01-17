//      1  2   3   4  5
an      1  4   3   16  5

#include<iostream>
using namespace std;

int main()
{
    int i,n,to;
    cout<<"entr the no";
    cin>>n;

    for(i=1;i<=n;i++)
    {
        if(i%2==0)
        {
            to=i*i;
            printf("\t%d\t",to);
        }
        else
        {
            printf("\t%d\t",i);
        }
    }
    return 0;
}

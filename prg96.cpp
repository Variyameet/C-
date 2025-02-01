//print A to Z.. whith number like A-65 B-66...  do   while loops
#include<iostream>
using namespace std;

int main()
{
int i;

i=65;
do
{
    cout<<char(i)<<int(i)<<"\n";
    i++;
    }while(i<=90);
    return 0;
}

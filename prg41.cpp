// continu statements or loops
#include<iostream>
using namespace std;

int main()
{
    int i;
    for(i=1;i<=10;i++)
    {
        cout<<"\n"<<i;
    }
    return 0;
}

/*
            i<=10              i++
i   i=1     1<=10       T   1   2
            2<=10       T   2   3
            3<=10       T   3   4
            4<=10       T   4   5
            5<=10       T   5   6
            6<=10       T   6   7
            7<=10       T   7   8
            8<=10       T   8   9
            9<=10       T   9   10
            10<=10      T   10   11
            11<=10      FALSE   1   2




*/


#include<iostream>
#include<stdio.h>
using namespace std;

class Result
{
    int rollno;
    string sname;
    int m1,m2,m3;
    float total,per;

    public:

    void setrollno()
    {
        cout<<"enter the rollno :";
        cin>>rollno;
    }
    void setsname()
    {
        cout<<"enter the sname :";
        cin>>sname;
    }

    void setsub()
    {
        cout<<"enter the subject1 :";
        cin>>m1;

        cout<<"enter the subject2 :";
        cin>>m2;

        cout<<"enter the subject3 :";
        cin>>m3;
    }

    int getrollno()
    {
        return rollno;
    }

    string getsname()
    {
        return sname;
    }

    int getm1()
    {
        return m1;
    }
     int getm2()
    {
        return m2;
    }
     int getm3()
    {
        return m3;
    }

    int stotal()
    {
        total=m1+m2+m3;

        return total;
    }

    int persentage()
    {
        per=(total/300)*100;

        cout<<per;

        if(per>=90)
        {
            cout<<"A";
        }
        else if(per>=70 && per<90)
        {
            cout<<"B";
        }
        else if(per>=50 && per<70)
        {
            cout<<"C";
        }
        else if(per>=33 && per<50)
        {
            cout<<"D";
        }
        else
        {
            cout<<"FAIl";
        }
    }
};

int main()
{
    Result std[5];

    // cout<<"rollno"<<"\t"<<"name"<<"\t"<<"maths"<<"\t"<<"scince"<<"\t"<<"english"<<"\t"<<"total"<<"\t"<<"persentage"<<"\t"<<"grade";

    for(int i=0;i<5;i++)
    {

    std[i].setrollno();
    std[i].setsname();
   std[i].setsub();

    // cout<<"rollno"<<"\t"<<"name"<<"\t"<<"maths"<<"\t"<<"scince"<<"\t"<<"english"<<"\t"<<"total"<<"\t"<<"persentage"<<"\t"<<"grade";

    // cout<<"\n"<<std[i].getrollno()<<"\t"<<std[i].getsname()<<"\t"<<std[i].getm1()<<"\t"<<std[i].getm2()<<"\t"<<std[i].getm3()<<"\t"<<std[i].stotal()<<"\t"<<std[i].persentage()<<endl;
}
    cout<<"rollno"<<"\t"<<"name"<<"\t"<<"maths"<<"\t"<<"scince"<<"\t"<<"english"<<"\t"<<"total"<<"\t"<<"persentage"<<"\t"<<"grade";
    for(int i=0;i<5;i++)
    {
         cout<<"\n"<<std[i].getrollno()<<"\t"<<std[i].getsname()<<"\t"<<std[i].getm1()<<"\t"<<std[i].getm2()<<"\t"<<std[i].getm3()<<"\t"<<std[i].stotal()<<"\t"<<std[i].persentage()<<endl;

    }
}



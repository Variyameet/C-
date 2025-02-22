// class base {
//     public :
//         int x;
//     protected:
//         int y;
//     private:
//         int z;
// };
// class publicderived : pubic base{
//     x is public
//     y is protected
//     z is not accessible from publicderived
// }
// class protectedderived : protected base{
//     x is protected
//     y is protected
//     z is not accessible from protectedderived
// }
// class privatederived : private base{
//     x is private
//     y is private
//     z is not accessible from privatederived
// }

#include<iostream>
using namespace std;
class base
{
    private:
        int pvt=1;
    protected:
        int prot=2;
    public:
        int pub=3;
        int getpvt()
        {
            return pvt;
        }
};
class publicderived : public base
{
    public:
        int getprot()
        {
            return prot;
        }
        int getpublic()
        {
            return pub;
        }
};
int main()
{
    publicderived object1;
    //object1.
    cout<<"private="<<object1.getpvt()<<endl;
    cout<<"protected="<<object1.getprot()<<endl;
    cout<<"public="<<object1.getpublic()<<endl;
    cout<<"public="<<object1.pub<<endl;

    return 0;


}

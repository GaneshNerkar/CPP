#include<iostream>
using namespace std;
class Base
{
    public:
    int A,B;

    Base()
    {
        cout<<"inside Base Constructor\n";
    }

    ~Base()
    {
        cout<<"inside Base Destructor\n";
    }

    void fun()
    {
        cout<<"Inside Base fun\n";
    }
};

class Derived : public Base
{
    public:
       int X,Y;
       Derived()
       {
        cout<<"inside Derived Constructor\n";
       }

       ~Derived()
       {
        cout<<"inside Derived Destructor\n";
       }

       void gun()
       {
        cout<<"Inside gun of Derived\n";
       }

};

class DerivedX : public Derived
{
    public:
    int M,N;
    DerivedX()
    {
        cout<<"Inside DerivedX constructor\n";
    }
    ~DerivedX()
    {
        cout<<"Inside Derived X Destructor\n";
    }
    void sun()
    {
        cout<<"Inside Derived Sun\n";
    }

};
int main()
{
    cout<<sizeof(Base)<<"\n";
    cout<<sizeof(Derived)<<"\n";
    cout<<sizeof(DerivedX)<<"\n";

   // Derived * ptr = NULL;
    //ptr  = new Derived;

    //ptr->fun();
    //ptr->gun();

    //delete ptr;

    DerivedX dobj;

    dobj.fun();
    dobj.gun();
    dobj.sun();


    return 0;
}
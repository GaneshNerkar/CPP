#include<iostream>
using namespace std;
class Base
{
    public:
       int A,B;
       void fun()
       {
        cout<<"base Fun\n";
       }
        virtual void gun()
       {
        cout<<"base gun\n";
       }
        virtual void sun()
       {
        cout<<"base sun\n";
       }

};
class Derived : public Base
{
    public :
      int X,Y;
      void gun()
      {
        cout<<"Derived gun\n";
      }
      void run()
      {
        cout<<"Derived run\n";
      }
       virtual void mun()
      {
        cout<<"Deived mun\n";
      }

};

int main()
{
    //cout<<"size of base class:"<<sizeof(Base)<<"\n";
    //cout<<"size of base class:"<<sizeof(Derived)<<"\n";
    Base *bp = NULL;
    Derived dobj;
    bp = &dobj;     //Upcasting
    bp->fun();
    bp->gun();
    bp->sun();
    return 0;
}
#include<iostream>
using namespace std;
class Base1
{
    public:
        int A;
        Base1()
        {
           cout<<"Base1 Constructor"

        }
        ~Base1()
        {

        }

};

class Base2
{
    public:
        int X,Y,Z;
        Base2()
        {

        }
        ~Base2()
        {

        }
};

class Derived : public Base2,Base1
{
    public:


};

int main()
{

    return 0;
}
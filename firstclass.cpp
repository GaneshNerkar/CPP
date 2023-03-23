#include<iostream>

using namespace std;

class Maths
{
    public: //Access Specifier
        int ino1; //characteristics
        int ino2;//characteristics
    Maths() //constructor(default)
    {
        ino1 = 0;
        ino2 = 0;
    }

    Maths(int A, int B) //constructor(parametrised)
    {
        ino1 = A;
        ino2 = B;
    }

   // ~Maths()
   // {
        // Destructor
   // }

    int Addition() //Behaviour
    {
        return ino1 + ino2;
    }

    int Substraction() //Behaviour
    {
        return ino1 - ino2;
    }
};
int main()
{
    Maths mobj1;
    Maths mobj2(11,10);

    int ret = 0;

    ret = mobj2.Addition();
    cout<<"Addition is :"<<ret<<"\n";

    ret = mobj1.Addition();
    cout<<"Addition is :"<<ret<<"\n";


    return 0;
}
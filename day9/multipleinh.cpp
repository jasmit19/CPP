#include <iostream> 
using namespace std; 

class A
{
    public:
    A()         //def constructor of A
    {
        cout<<"constructor of class A is called"<<endl;
    }
};

class B
{
    public:
    B()         //def constructor of B
    {
        cout<<"constructor of class B is called"<<endl;
    }
};

class C:public B, public A      //multiple inheritance
{
    public:
    C()         //def constructor of C
    {
        cout<<"constructor of class C is called"<<endl;
    }
};

int main()
{
    C obj;
    return 0;
}
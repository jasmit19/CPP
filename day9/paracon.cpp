#include<iostream>
using namespace std;

class A
{
    public:
    A()         //def constructor of A
    {
        cout<<"constructor of class A is called"<<endl;
    }

     A(int p)   //para cons
    {
        cout<<"para cons of A"<<endl;
    }
};

class B
{
    public:
    B()         //def constructor of B
    {
        cout<<"constructor of class B is called"<<endl;
    }

    B(int q)    //para cons
    {
        cout<<"para cons of B"<<endl;
    }
};

class C:public B, public A      //multiple inheritance
{
    public:
    C()         //def constructor of C
    {
        cout<<"constructor of class C is called"<<endl;
    }

     C(int p,int q):B(q),A(p)   //para cons
    {
        cout<<"para cons of C"<<endl;
    }
};

int main()
{
    C obj1;         //def cons is called
    C obj(2,3);     //para cons is called
    return 0;
}
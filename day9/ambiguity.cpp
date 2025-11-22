#include <iostream> 
using namespace std; 
class A
{
    public:
    void show()
    {
        cout<<"member fuction of class A :"<<endl;
    }
};
class B
{
    public:
    void show()
    {
        cout<<"member fuction of class B :"<<endl;
    }
};
class C: public A,public B
{
    public:
    void show()
    {
        //A::show();    if don't want to call in main class with object
        //B::show();    if don't want to call in main class with object
        cout<<"child class function show()"<<endl;
    }

    void display()
    {
        cout<<"member fuction of child class:"<<endl;
    }
};

int main()
{
    C ob;

    ob.A::show();
    ob.B::show();
    ob.show();
    ob.display();
}






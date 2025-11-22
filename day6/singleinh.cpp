#include<iostream>
using namespace std;
class Parent
{
    public:
    int a=2;
};
class Child:public Parent
{
    public:
    int b=4;
};
int main()
{   
    Child c1;
    Parent p1;

    cout<<p1.a;

    cout<<c1.a;
    cout<<c1.b;
}
    



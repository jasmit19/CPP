#include <iostream>
using namespace std;

// Base class
class A {
public:
    void fun() 
    { 
        cout << "Base" << endl; 
    }
};

// Parent class 1
class B : public A {
public:
};

// Parent class 2
class C : public A
{
public:
};

// Child class inheriting from both Parent1 and Parent2
class Child : public B, public C 
{
};

int main()
{
    Child* obj = new Child();
    //obj->fun; // Abiguity arises, as Child now has two copies of fun()
    return 0;
}

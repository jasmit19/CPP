#include<iostream>
using namespace std;

int glo=2;
class Parent
{

    public:
    int a=3;

    protected:
    int b=4;

    private:
    int c=5;
};

class Child:public Parent
{
    public:
    int x=a*b*glo;
        public:
    int display()
    {
        return x;
    }

};

int main()
{
    Parent p1;
    Child c1;
    cout<<c1.x;
    cout<<c1.display();
}


#include <iostream>  
using namespace std;  

class Demo
{
    int a,b;
    public:
     Demo(int p, int q)
     {
        cout<<"the address of this pointer:"<<this<<endl;
        this->a=p;
        this->b=q;
     }

     void display()
     {
        cout<<a<<endl;
        cout<<b<<endl;
     }
};

int main()
{
    Demo d1(19,21);
    d1.display();

    cout<<"address of object d1:"<<&d1;
}
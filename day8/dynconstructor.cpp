#include<iostream> 
using namespace std; 

class Demo
{
    int *ptr;

    public:
    //dynamically intitializing ptr using new
    //memory is allocated on heap
    Demo()
    {
        ptr=new int;
        *ptr=10;
    }

    void display()
    {
        cout<<*ptr<<endl;
    }
};

int main()
{
    Demo d1;
    d1.display();   
    //calls the dynamically allocated variable i.e. ptr
}
#include<iostream>
using namespace std;

class Complex
{
    int real, img;
    public:
    void accept();
    void display();
    void setReal(int);
    int getReal();
};

void Complex::accept()
{
    cout<<"enter value for real and imaginary";
    cin>>real>>img;


}
void Complex::display()
{
    cout<<"complex number is=\n"<<real<<"+"<<img<<"i"<<endl;
}

void Complex::setReal(int r)
{
    real=r;
}

int Complex::getReal()
{
    return real;
}

int main()
{
    Complex c1;
    cout<<"address of an obj is\n="<<&c1;
    c1.accept();
    c1.display();
    c1.setReal(23);
    c1.display();

    cout<<"real part is=\n"<<c1.getReal();
}
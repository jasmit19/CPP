#include<iostream> 
using namespace std; 
class employee
{
    int id;

    public:

    employee();            /*constructor*/
    employee(int);          //parameterised cons
    void display(); 
    int findsalary()
    {
        return 0;
    }
};

employee::employee()
{
    id=0;
}

employee::employee(int i)
{
    id=i;
}

void employee::display()
{
    cout<<"employee id is:"<<id<<endl;
}


class wage:public employee
{
    int hours, rate;

    public:
    wage();
    wage(int,int,int);
    void display();
    int findsal();
};

wage::wage()
{
    cout<<"default wage:";
    hours=0;
    rate=0;
}

wage::wage(int i, int h, int r):employee(i)
{
    cout<<"parameterized wage:";
    hours=h;
    rate=r;
}

int wage::findsal()
{
    return hours*rate;
}

void wage::display()
{
    employee::display();
    cout<<hours<<endl;
    cout<<rate<<endl;
}

int main()
{
    employee * ptr;
    wage we1(15,300,200);
    ptr=&we1;
    cout<<"salary is "<<ptr->findsalary();
    ptr-> display();
}



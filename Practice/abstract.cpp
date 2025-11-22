#include<iostream>
using namespace std;

class emp
{
    int id;
    public:
    emp();
    emp(int);
    virtual void display();
    virtual int sal()
    {
        return 0;
    }
};

emp::emp()
{
    cout<<"def cons of emp is called:";
    id=0;
}

emp::emp(int i)
{
    cout<<"para cons of emp is called";
    id=i;
}

void emp::display()
{
    cout<<"the emp id is:"<<id;
}

class wage:public emp
{
    int hrs,rate;
    public:
    wage();
    wage(int,int,int);
    void display();
    int sal();
    void show();
};

wage::wage()
{
    cout<<"def cons of wage is called";
    hrs=0;
    rate=0;
}

wage::wage(int i,int h,int r):emp(i)
{
    cout<<"para cons of wage is called";
    hrs=h;
    rate=r;
}

int wage::sal()
{
    return hrs*rate;
}

void wage::display()
{
    emp:display();
    cout<<hrs<<endl;
    cout<<rate<<endl;
}

void wage::show()
{
    cout<<"in show() of wage employee";
}

int main()
{
    emp* ptr=new wage(29,30,500);
    cout<<ptr->sal();
    ptr->display();
}
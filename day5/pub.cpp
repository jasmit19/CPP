#include<iostream>
using namespace std;

class Circle
{
    public:
    double rad;

    double area(int);
};

double Circle::area(int x)
    {
        rad=x;
        return 3.14*rad*rad;
    }
int main()
{
    Circle obj1;
    cout<<obj1.area(10);
}
#include<iostream>
using namespace std;

class Circle
{
    private:
        double radius;
    public:
        double area(int x)
        {
            radius=x;
            return 3.14*radius*radius;
        }    

};
int main()
{
    Circle obj1;
    obj1.area(10);
    cout<<obj1.area(10);

}

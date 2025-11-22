#include <iostream>  
using namespace std;  
#include<string.h>

class Date
{
    int day, month, year;
    public:

    int getDay()const;

    Date(int d, int m, int y)
    {
        day=d;
        month=m;
        year=y;
    }

    void display() const
    {
        cout<<"date is:";
        cout<<day<<"/"<<month<<"/"<<year<<endl;
    }

    void setDay(int dd)
    {
        day=dd;
    }
};

int Date::getDay()const
{
    return day;
}
int main()
{
    Date d1(21,8,2003);
    d1.display();
    d1.getDay();
    
    Date d2(19,3,2003);
    d2.setDay(2);
    d2.getDay();
}
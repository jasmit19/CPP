#include<iostream>
using namespace std;
class Person
{
    public:
    Person(int x)
    {
        cout<<"Person::Person(int) is called"<<endl;
    }
};

class Faculty:public Person
{
    public:
    Faculty(int x):Person(x)
    {
        cout<<"Faculty::Faculty(int) is called"<<endl;
    }
};

class Student:public Person
{
    public:
    Student(int x):Person(x)
    {
        cout<<"Student::Student(int) is called"<<endl;
    }
};

class TA:public Faculty, public Student
{
    public:
    TA(int x):Student(x),Faculty(x)
    {
        cout<<"TA::TA(int) is called"<<endl;
    }
};

int main()
{
    TA t1(30);
    return 0;
}
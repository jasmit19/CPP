#include<iostream>
using namespace std;
class Person 
{
public:
    Person(int x)   //para cons
    {
         cout << "Person::Person(int ) called" << endl; 
    }
};
 
class Faculty : public Person 
{
 public:
    Faculty(int x):Person(x)  //Faculty cons invoking cons of Person class
    {
       cout<<"Faculty::Faculty(int ) called"<< endl;
    }
};
 
class Student : public Person 
{
public:
    Student(int x):Person(x) //Student cons invoking cons of Person cons
    {
        cout<<"Student::Student(int ) called"<< endl;
    }
};
 
class TA : public Faculty, public Student  
{
public:
    TA(int x):Student(x), Faculty(x)   
    {
        cout<<"TA::TA(int ) called"<< endl;
    }
};
 
int main()  
{
    TA ta1(30);
}


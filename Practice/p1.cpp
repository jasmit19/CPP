#include<iostream>
#include<string>
#include<stdexcept>
using namespace std;

class Vehicle
{
protected:
    int id;
    string brand;
    string model;
    int year;

public:
    Vehicle(int Vid, string Vbrand, string Vmodel, int Vyear): id(Vid), brand(Vbrand),model(Vmodel),year(Vyear)
    {
        
    }

int getID() const 
{
    return id;
}

virtual void display() const=0;

virtual ~Vehicle()
{

}

};
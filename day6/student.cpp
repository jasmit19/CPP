//Write a student class and use it in your program. Store the data of 10 students and display//
 //the sorted data according to their roll numbers, dates of birth, and total marks//

 #include<iostream>
 #include<string.h>
using namespace std;

class Student
{
    public:
    int roll[10];
    int date[10];
    int total[10];
    int i,j,k;

    public:

    void rollno()
    {
        cout<<"enter roll no="<<endl;

        for(i=0;i<10;i++)
        {
            cin>>roll[i];
        }
    }

    public:
    void dob()
    {
        cout<<"enter dob="<<endl;
        for(j=0;j<10;j++)
        {
            cin>>date[j];
        }
    }

    public:
    void marks()
    {
        cout<<"enter total="<<endl;

        for(k=0;k<10;k++)
        {
            cin>>total[k];
        }
    }

        public:
        void display()
    {
        cout<<total[k];
    }
        
};



int main()
{
    Student s1;
    s1.rollno();
    s1.dob();
    s1.marks();
    s1.display();
}
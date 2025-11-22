#include<iostream> 
using namespace std; 

class Student 
{
    int roll;
    char name[20];

    public:
    void accept()
    {
        cin>>roll;
        cin>>name;
    }
    void display()
    {
        cout<<"roll no is:"<<roll<<"/t"<<"name is:"<<name<<endl;
    }

    ~Student()
    {
        cout<<"destructor is called\n";
    }
};

int main()
{
    int n,i;

    cout<<"enetr no of students:"<<endl;
    cin>>n;

    Student *ptr=new Student[n]; 
    
    cout<<"accept details"<<endl;
    for(i=0;i<n;i++)
    ptr[i].accept();

    cout<<"display details"<<endl;
    for(i=0;i<n;i++)
    ptr[i].display();

    delete[] ptr;
}
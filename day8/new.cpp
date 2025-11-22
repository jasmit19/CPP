#include<iostream> 
using namespace std; 

class New
{
    int roll;
    char name[10];

    public:
    void get()
    {
        cin>>roll;
        cin>>name;
    }
    void set()
    {
        cout<<"rollno="<<roll<<"/t"<<"name="<<name<<endl;
    }
    ~New()
    {
        cout<<"destructor is called\n";
    }
};

int main()
{
    int t,j;

    cout<<"eneter total students=";
    cin>>t;

    New *ptr2=new New[t];

    cout<<"get";
    for(j=0;j<t;j++)
    ptr2[j].get();

    cout<<"set";
    for(j=0;j<t;j++)
    ptr2[j].set();

    delete[] ptr2;
}
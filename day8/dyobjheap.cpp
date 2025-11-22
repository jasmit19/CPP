#include<iostream> 
using namespace std; 

class Cdate
{   
    int dd,mm,yy;
    public:

    Cdate()
    {
        dd=mm=yy=0;
    }

    Cdate(int d, int m, int y)
    {
        dd=d;
        mm=m;
        yy=y;
    }

    void show()
    {
        cout<<dd<<"/"<<mm<<"/"<<yy;
    }

};

int main()
{
    //memory allocation in heap by creating *ptr1
    //when you don't want to creat an object and run dynamically
    
    Cdate *ptr1=new Cdate(19,03,2003);  
    ptr1 -> show();         //calling show() function with ptr1                  
    delete ptr1;            //memory deleted from heap explicitly
    
    //bcoz it won't be deleted implicitly by the compiler like usually
    //to save memory and clear previous memory which will give garbageb value if called
}
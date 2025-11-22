#include<iostream> 
#include<stdexcept>
using namespace std; 

int main()
{
    int num,den,res;

    cout<<"enter num:";
    cin>>num;

    // stdexcept e;
    cout<<"enter deno:";
    cin>>den;

    try
    {
        if(den==0)
        {   
            throw 0;
        }

        if(den <= 0)
        {
            throw &den;
        }

        else
        {
            res=num/den;
            cout<<"the result:"<<res<<endl;
        }
    }

    catch(int e)
    {
        cout<<e<<" Cannot be a denominator"<<endl;
    }
    catch(const int * msg)
    {
        cout<<"denominator can't be "<<*msg<<endl;
    }
    cout<<"end of the program:";
}
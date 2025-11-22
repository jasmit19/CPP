#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter n:";
    cin>>n;

    int *ptr=new int[n];

    for(int i=0;i<n;i++)
    {
        cin>>ptr[i]; 
    }

    cout<<"display:";

    for(int i=0;i<n;i++)
    {
        cout<<ptr[i]; 
    }

    delete[] ptr;
}
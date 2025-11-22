#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    int n,m,sum=0;
    float avg;

    cout<<"enter no of subjects:";
    cin>>n;

    cout<<"enter total char in name:";
    cin>>m;

    int *p_marks=new int[n];

    char *p_name=new char[m+1];

    cout<<"enter marks:";

    for(int i=0;i<n;i++)
    {
        cin>>p_marks[i];   
    }

     for(int i=0;i<m+1;i++)
    {
        cin>>p_name[i];   
    }

     for(int i=0;i<n;i++)
    {
        sum=sum+p_marks[n];
    }

    avg=(float)sum/n;

    cout<<"name=";
    cin>>p_name;
    cout<<"name of student="<<p_name<<endl;
    cout<<"average="<<avg<<endl;
}
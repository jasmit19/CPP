#include<iostream>
using namespace std;
int main()
{
    int i,j,n;
    cout<<"enter the elements:";
    cin>>n;

    for(i=n;i>=1;i--)
    {
         for(j=n;j>=i;j--)
        {
            cout<<" ";
        }
        for(j=1;j<=i;j++)
        {
           cout<<"* "; 
        }
            
        cout<<"\n";
    }
}
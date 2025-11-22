#include<iostream>
using namespace std;
#include<math.h>
int main()
{
    int n, fact=1;

    cout<<"enter no:";
    cin>>n;

    while(n>0)
    {
        fact=fact*n;
        n--;
    }
    cout<<"factorial="<<fact;
}
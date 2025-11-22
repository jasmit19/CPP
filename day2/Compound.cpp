#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    double p,r,t,ci;
    cout<<"principal=\n";
    cin>>p;

    cout<<"rate=\n";
    cin>>r;

    cout<<"time=\n";
    cin>>t;

    ci=p * (pow(1+r,t)-1);

    cout<<"CI:"<<ci<<endl;
    return 0;
    
}
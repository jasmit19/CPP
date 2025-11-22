#include <iostream> 
using namespace std; 
#define MAXIMUM(a,b) (a>b) ? a:b

int main()
{
    cout<<"max of (10,22)=";
    int k=MAXIMUM(10,22);
    cout<<k<<endl;

    cout<<"max of (1055,61)=";
    int k1=MAXIMUM(1055,61);
    cout<<k1<<endl;

    

    return 0;
}
#include <iostream> 
using namespace std; 
#define MAXIMUM(a,b) (a>b) ? a:b
#define MINIMUM(a,b) (a<b) ? a:b
int main()
{

    cout<<"max of (1055,61)=";
    int k1=MAXIMUM(1055,61);
    cout<<k1<<endl;

    cout<<"min of (1055,61)=";
    int k2=MINIMUM(1055,61);
    cout<<k2<<endl;

    return 0;
}
#include<iostream>
using namespace std;
#include<math.h>
int main()
{
    int n, count =0;
    cin>>n;
    
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            count++;
            
        }
    }
    if(count==0){
        cout<<"the number is prime";
    }
    else{
        cout<<"the number is not prime";
    }

}
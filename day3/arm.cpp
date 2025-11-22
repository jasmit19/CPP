#include<iostream>
using namespace std;
#include<math.h>
int main()
{
    int num, sum=0,rem;
    cout<<"enter a no:";
    cin>>num;
    int temp = num;
    
    while(num!=0)
    {
    rem=num%10;
    sum=sum+(rem * rem * rem);
    num=num/10;
    }

    if(temp==sum)
    {
        cout<<"armstrong";
    }

    else{
        cout<<"not";
    }

    cout<<sum;

}
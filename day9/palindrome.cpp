#include <iostream> 
using namespace std; 

int main()
{
    int a,rem,rev=0;

    cout<<"enter a="<<endl;
    cin>>a;

    int orig=a;

    while(orig!=0)
    {
        rem=orig%10;        //last digit
        rev=(rev*10)+rem;   //new no
        orig=orig/10;       //remove last digit from original
    }

    if(rev==a)
    {
    cout<<"palindrome"<<endl;
    }
    else
    {
    cout<<"not";
    }
} 
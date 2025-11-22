#include <iostream> 
using namespace std; 
#include <string.h>

int main()
{
    char str1[10];
    int i;


    cout<<"enter a string:"<<endl;
    cin>>str1;

    string rev="";

    for(i=strlen(str1)-1;i>=0;i--)
    {
        rev=rev+str1[i];
    }

    if(rev==str1)
    {
        cout<<"palindrome";
    }
    else
    {
        cout<<"not";
    }
    
}

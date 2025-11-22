#include<iostream>
#include<string>
using namespace std;

int main()
{
    int i=0,j=0,len=0;
    string str1;

    cout<<"enter string 1:";
    cin>>str1;

    while(str1[i]!='\0')
    {
        len=len+1;
        i++;
    }
    
    cout<<len;

    int start=0;
    int end=len-1;
    char temp;

    while (start<end)
    {
        char temp=str1[start];
        str1[start]=str1[end];
        str1[end]=temp;

        start++;
        end--;
    }
    
    cout<<"reverse="<<str1<<endl;
    return 0;
}




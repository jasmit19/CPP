#include<iostream>
#include<string.h>
#include<math.h>
using namespace std;
int main()
{
    int i;

    char str1[20];
   

    cout<<"1st string is:";
    cin>>str1;

     string reverse="";

        for(i=strlen(str1);i>=0;i--)
        {
            reverse=reverse+str1[i];
        }
    cout<<reverse;
}
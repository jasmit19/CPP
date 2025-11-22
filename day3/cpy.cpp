#include<iostream>
using namespace std;
#include<string.h>

int main()
{
    char str1[20];
    char str2[30];

    cout<<"enter string=";
    cin>>str1;

    int i=0;
    while(str1[i]<=strlen(str1))
{   
    str2[i]=str1[i];
    i++;
}   
}
    void user_strcpy(char*s2,char*s1)
    {
        while(*s1!='\0')
        {
            *s2=*s1;
            s1++;
            s2++;
        }
        *s2='\0';
    }

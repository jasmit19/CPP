
#include<iostream>
using namespace std;

void def(char='*', int=3);
int main()
{
    int count=5;

    cout<<"no arguments";
    def();

    cout<<"1 argument";
    def('#');

    cout<<"2 argument";
    def('$', count);

}

void def(char c, int count)
{
    for(int i=0;i<=count;++i)
    {
        cout<<c<<count<<endl;
    }


    cout<<endl;
}
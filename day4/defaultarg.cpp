
#include<iostream>
using namespace std;

void add(int=1, int=2, int=3,int=4);
void def(char='*', int=30);

int main()
{
    int count=33;
    add();
    add(7);
    add(12,13);
    add(44,45,46);
    add(87,86,84,83);
}

void add(int a, int b, int c, int d)
{
    cout<<a+b+c+d<<endl;
}



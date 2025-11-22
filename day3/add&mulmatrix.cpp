#include<iostream>
using namespace std;

int main()
{
   int a[3][3]= {1,2,3,4,5,6,7,8,9};
    int b[3][3]= {9,8,7,6,5,4,3,2,1};
    int c[3][3];
    int i,j;
    cout<<"addition:"<<endl;
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            c[i][j]=(*(*(a+i)+j))+(*(*(b+i)+j));
            cout<<c[i][j]<<"\t";
        }
    }

}
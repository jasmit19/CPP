#include<iostream>
using namespace std;

int main()
{
    int row=3, col=3;
    int mat[row][col]={{1,2,3},{4,5,6},{7,8,9}};
    int trans[3][3];

    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {   
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }

    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            trans[i][j]=mat[j][i];
        }
        cout<<endl;
    }


    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }

    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cout<<trans[i][j]<<" ";
        }
        cout<<endl;
    }
}
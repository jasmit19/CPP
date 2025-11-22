#include<iostream>
using namespace std;
#include<math.h>
int main()
{
    int a[]={103,1,98,39,40,67};
    int lar=a[0];
    int sec=-1,third=-2;

    for(int i=0;i<6;i++)
    {
        if(a[i]>lar)
        {
            sec=lar;
            lar=a[i];
        }
    }

    for(int j=0;j<6;j++)
    {
        if(a[j]>sec  && a[j]<lar)
        {
            third=sec;
            sec=a[j];
        }
    }

    for(int k=0;k<6;k++)
    {
        if(a[k]>third  && a[k]<sec)
        {
            third=a[k];
        }
    }



    cout<<"largest="<<lar<<endl;
    cout<<"second="<<sec<<endl;
    cout<<"third="<<third;

}
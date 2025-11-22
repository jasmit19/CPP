 #include<iostream>
using namespace std;
int main()
{
    int n, i, t1=0,t2=1,next;
    cout<<"enter the number of terms:";
    cin>>n;
    cout<<"Fibonacci series is: 0   1"<<"\t";
    
    for(i=1;i<=n;i++)
    {
        next=t1+t2;
        t1=t2;
        t2=next;

        cout<<next<<"\t";
    }
    
}






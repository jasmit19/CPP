#include<iostream> 
#include<fstream>
using namespace std; 

int main()
{
    ofstream mine_file("exa.txt", ios::app);

    mine_file << "abcd \n";
    cout<<"abcd";
    
    mine_file.close();
    return 0;
}
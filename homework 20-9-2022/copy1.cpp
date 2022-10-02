#include <iostream>
#include<fstream>
using namespace std;
int main()
{
    ifstream fs;
    ofstream ft;
    char ch, fname1[20], fname2[20];
    cout<<"Enter source file name  (*.txt) : ";
    cin>>fname1;
    fs.open(fname1);
    if(!fs)
    {
    cout<<"Error";
    exit(1);
    }
    cout<<"Enter target file name  (*.txt) : ";
    cin>>fname2;
    ft.open(fname2);
    if(!ft)
    {
    cout<<"Error";
    fs.close();
    
    exit(2);
    }
    while(fs.eof()==0)
    {
        fs>>ch;
        ft<<ch;
    }
        cout<<"File copied",
        fs.close();
        ft.close();
        
        
        return 0;
}
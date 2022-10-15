#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int x,y,size;

    cout << "Enter the size" << endl;
    cin>>size;
    for(x=1; x<=size; x++)
    {
        for(y=1; y<=size; y++)
        {
        cout<<"*";
    }
   cout<<"\n";
    }
    getch();
    return 0;
}

#include <iostream>
using namespace std;

int main()
{
    int number,fac=1;
    cout << "Enter : "; cin>>number;

    for(int i=1;i<=number;i++)
    {
        fac=fac*i;
    }

    cout<<"Factorial of Given Number is: " << fac << endl;
    return 0;
}
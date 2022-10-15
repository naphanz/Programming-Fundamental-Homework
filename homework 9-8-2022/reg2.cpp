#include<iostream>
using namespace std;

int main()
{
	int i, j, size;  

    cout << "Enter size = ";
    cin >> size;


    for(i = 0; i < size; i++) 
    {
    	for(j = 0; j < size; j++)
        {
            if (i == 0 || i == size - 1 || j == 0 || j == size - 1) 
            {
                cout << "*" << " ";
            }
            else 
            {
                cout << "  ";
            } 
        }
        cout << "\n";
    }		
 	return 0;
}

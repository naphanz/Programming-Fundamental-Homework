#include <iostream>
using namespace std;

int main() 
{
  int decimal, binary = 0, z, y = 1;
  cin >> decimal;
  while (decimal != 0) {
    z = decimal % 2;
    binary = binary + (z * y);
    decimal = decimal / 2;
    y *= 10;
  }
  cout << "binary : " << binary ;
  return 0;
}
#include <iostream>
using namespace std;

int main()
{
 double decimal;
 int nearest_integer;
 cout << "Enter a decimal number: ";
 cin >> decimal;
 nearest_integer = static_cast<int>(decimal+0.5);
 cout << "The nearest integer is: " << nearest_integer;   
 return 0;

}
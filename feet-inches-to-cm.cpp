#include <iostream>
using namespace std;

int main()
{
 int feet, inches;
 double cm;
 cout << "Enter the length in feet and inches: ";
cin >> feet >> inches;
feet = feet * 12 + inches;
cm = feet * 2.54;
cout << "The length in centimeter is: " << cm << " cm";

    return 0;
}
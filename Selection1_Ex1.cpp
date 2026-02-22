#include <iostream>
using namespace std;
int main()
{
double speed, fine;
cout << "Enter the speed: ";
cin >> speed;
if(speed<=123 && speed>0)
fine = 0;
else if(speed>123 && speed<=140)
fine = 150;
else if(speed>140)
fine = 500;
else{
cout << "Invalid speed";
return 0;}
cout << "Fine = " << fine << " AED";
    return 0;
}
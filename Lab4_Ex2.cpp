#include <iostream>
using namespace std;
int main(){
int number_of_days;
double late_fee;
cout << "Enter number of late days: ";
cin >> number_of_days;
if(number_of_days > 0 && number_of_days<=5)
late_fee = 4.5 + (1.5*number_of_days);
else if(number_of_days>5)
late_fee = 4.5 + 1.5*5 + 3*(number_of_days-5);
else
late_fee = 0;
cout << "Late fee= " << late_fee;
    return 0;
}
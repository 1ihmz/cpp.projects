#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
float price, premium, total_premium;
char insurance_group;
cout << "Enter the price of your car: ";
cin >> price;
cout << "Enter the insurance group: ";
cin >> insurance_group;
switch(insurance_group){
    case '0':
    case '1':
    premium = 0.009;
    break;
    case '2':
    case '3':
    case '4':
    premium = 0.03;
    break;
    case '5':
    premium = 0.0615;
    break;
    default:
    cout << "Invalid insurance group!";
    return 0;
}
total_premium = price * premium;
cout << "The total premium is: " << fixed << setprecision(2) << total_premium;
return 0;
}
#include <iostream>
using namespace std;
int main(){
int account_number;
double gallons_used, amount_due;
char code;
cout << "Enter your account number: ";
cin >> account_number;
cout << "Enter (1) for Home Use\nEnter (2) for Commercial Use\nEnter (3) for Industrial Use ";
cin >> code;
if(code >= '1' && code <= '3'){
cout << "Enter the number of gallons used: ";
cin >> gallons_used;}
if(gallons_used <= 0){
    cout << "Invalid gallons number";
    return 0;
}
switch(code){
    case '1':
    amount_due = 5 + 0.005*gallons_used;
    break;
    case '2':
    if(gallons_used <= 4000000 && gallons_used > 0)
    amount_due = 1000;
    else if(gallons_used > 4000000)
    amount_due = 1000 + 0.0025*(gallons_used - 4000000);
    break;
    case '3':
    if(gallons_used <= 4000000 && gallons_used > 0)
    amount_due = 1000;
    else if(gallons_used > 4000000 && gallons_used <= 10000000)
    amount_due = 2000;
    else if(gallons_used > 10000000)
    amount_due = 3000;
    break;
    default:
    cout << "Invalid Code";
    return 0;
}
cout << "The amount due for account number "<< account_number << " for code (" << code << ')' << " is " << amount_due << " AED";
return 0;
}
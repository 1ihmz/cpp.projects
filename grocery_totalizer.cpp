#include <iostream>
using namespace std;
int main()
{
double price=0, total_bill=0;
while(price!=-1){ //sentinel loop
total_bill += price;
cout << "Enter the price of the item: ";
cin >> price;
}
cout << "The total bill is: " << total_bill << " AED";
    return 0;
}
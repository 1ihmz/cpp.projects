#include <iostream>
using namespace std;
int main(){
int quantity;
double price;
char product;
cout << "Enter the product type (1,2,3,4,5): ";
cin >> product;
if(product >= '1' && product <='5'){
    cout << "Enter the quantity: ";
    cin >> quantity;
}
switch(product){
    case '1':
price = 3.0 * quantity;
break;
case '2':
price = 4.50 * quantity;
break;
case '3':
price = 10.5 * quantity;
break;
case '4':
price = 5.98 * quantity;
break;
case '5':
price = 6.69 * quantity;
break;
default:
cout << "Invalid Product";
return 0;
}
cout << "The retail price is " << price << " AED";
return 0;
}
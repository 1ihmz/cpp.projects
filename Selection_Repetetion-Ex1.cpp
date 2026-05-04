#include <iostream>
using namespace std;
int main(){
int month;
cout << "Enter the month number: ";
cin >> month;
switch(month){
    case 2:
    case 3:
    case 4:
    case 5:
    cout << "This is the spring semester";
    break;
    case 7:
    case 8:
    cout << "This is summer";
    break;
    case 9:
    case 10:
    case 11:
    case 12:
    cout << "This is the fall semester";
    break;
    case 1:
    case 6:
    cout << "This is an exam month";
    break;
    default:
    cout << "Error: Enter a correct number (1 - 12)";
    break;
}
    return 0;
}
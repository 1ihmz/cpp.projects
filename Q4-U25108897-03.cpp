#include <iostream>
using namespace std;
int main(){
char mode_id;
float temp;
cout << "Smart Home Hub\n 1. Energy Saver Mode\n 2. Comfort Mode\n 3. Night Mode" << endl;
cout << "Choose Mode: ";
cin >> mode_id;
switch(mode_id){
    case '1': //Don't put the cout and the cin after the switch, put them after the case so the program recognize them.
    cout << "Enter the temperature: ";
    cin >> temp;
    if(temp>28)
    cout << "AC set to 24C";
    else
    cout << "System Idle";
    break;
    case '2':
    cout << "Enter the temperature: ";
    cin >> temp;
    if(temp>24)
    cout << "AC set to 22C";
    else if(temp<20)
    cout << "Heater ON";
    else
    cout << "System Idle";
    break;
    case '3':
    cout << "Lights OFF, AC set to Silent Mode";
    break;
    default:
    cout << "Invalid Mode Selected";
}
    return 0;
}
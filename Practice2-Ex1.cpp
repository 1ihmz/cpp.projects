#include <iostream>
using namespace std;
int main(){
double temp, temp_in_c;
char conversion_type;
cout << "Enter the temperature: ";
cin >> temp;
cout << "Enter (1) to convert from fahrenheit to celsius\nEnter (2) to convert from kelvin to celsius: ";
cin >> conversion_type;
switch(conversion_type){
case '1':
temp_in_c = (temp-32)*5/9;
cout << "The temperature in celsius is: " << temp_in_c;
break;
case '2':
temp_in_c = temp - 273.15;
cout << "The temperature in celsius is: " << temp_in_c;
break;
default:
cout << "Invalid expression";
} 
return 0;
}
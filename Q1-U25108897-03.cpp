#include <iostream>
using namespace std;
int main()
{
 int phone_number, birth_year, phone_digits, prefix, suffix, pin;
 cout << "Insert birth year: ";
 cin >> birth_year;
  cout << "Insert phone number: ";
  cin >> phone_number;

 phone_digits = phone_number % 100;
 prefix = birth_year / (phone_digits + 1);
 suffix = (phone_digits * 5) % 99;
 pin = suffix + prefix * 100;
 cout << "Generated PIN: " << pin;
 
    return 0;
}
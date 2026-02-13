#include <iostream>
using namespace std;

int main()
{
 int num, rev=0;
 cout << "Enter an integer number: ";
 cin >> num;
 while(num > 0)
 {
    int d = num % 10; //Takes the last digit
    rev = rev * 10 + d; //Adds the last digit to be on the right side
    num = num / 10; //Divide the number by 10 so it can get back to the first step and complete the process until the number reaches 0
 }
 cout << "The reverse number is: " << rev;

    return 0;
}
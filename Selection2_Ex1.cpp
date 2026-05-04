#include <iostream>
using namespace std;
int main()
{
int num;
char ch, lower, upper;
cout << "Enter a character: ";
cin >> ch;
if(ch>='A' && ch<='Z'){
cout << "The input character is an upper case letter\n";
lower = ch + 32;
cout << "The lower case of " << ch << " is: " << lower;}
else if(ch>='a' && ch<='z'){
cout << "The input character is a lower case letter\n";
upper = ch - 32;
cout << "The upper case of " << ch << " is: " << upper;}
else
cout << "The input character is not a letter!";
return 0;
}
#include <iostream>
using namespace std;
int main()
{
char ch;
cout << "Enter a character: ";
cin >> ch;
if(ch>='a' && ch<='z'){
while(ch<='z'){
cout << ch << ' ';
ch++;}
}
else if(ch>='A' && ch<='Z'){
while(ch<='Z'){
cout << ch << ' ';
ch++;}
}
else
cout << "Enter a valid character";
return 0;
}
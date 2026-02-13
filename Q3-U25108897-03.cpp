#include <iostream>
using namespace std;

int main()
{
 double a,b,c;
 cout << "Enter three sides of a trianagle: ";
 cin >> a >> b >> c;

  if(a + b > c && a + c > b && b + c > a)
{
if(a == b && b == c)
 cout << "The trianagle is equilateral.";
 //else if(a == b && b != c || a != b && b == c || a == c && c != b)
 else if( a == b || b == c || c == a) //This is a simplified version of the previous code that is more readable and easier to execute.
 cout <<"The trianagle is isosceles.";
 else if(a != b && b != c)
 cout <<"The trianagle is scalene.";
}  
  
 else
{
 cout << "Error! It is not a trianagle."; 
}

    return 0;
}
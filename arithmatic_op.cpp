#include <iostream>
using namespace std;
int main()
{
int num1, num2, result;
char op;
cout << "Enter an arithmatic expression: ";
cin >> num1 >> num2 >> op;
switch(op){
case '+':
result = num1 + num2;
cout << "The result of the expression " << num1 << '+' << num2 << " is " << result; 
break;
case '-':
result = num1 - num2;
cout << "The result of the expression " << num1 << '-' << num2 << " is " << result; 
break;
case '*':
result = num1 * num2;
cout << "The result of the expression " << num1 << '*' << num2 << " is " << result; 
break;
case '/':
if(num2 == 0)
cout << "The expression is invalid";
result = num1 / num2;
cout << "The result of the expression " << num1 << '/' << num2 << " is " << result; 
break;
case '%':
result = num1 % num2;
cout << "The result of the expression " << num1 << '%' << num2 << " is " << result; 
break;
default:
cout << "The expression is invalid";   
}


return 0;

}
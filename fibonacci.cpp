#include <iostream>
using namespace std;
int main(){
int fib1, fib2, fibn, sum=0, i=3;
cout << "Enter two fibonacci numbers: ";
cin >> fib1 >> fib2;
if(fib2>fib1){
cout << "Enter the n fibonacci number: ";
cin >> fibn;
while(i<=fibn){
sum = fib1 + fib2;
fib1 = fib2;
fib2 = sum;
i++;
}
cout << sum;}
else
cout << "Invalid input";
    return 0;
}
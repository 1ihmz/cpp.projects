#include <iostream>
using namespace std;
int main(){
int number, counter=1;
long long fact=1;
cout << "Enter an integer number to compute its factorial: ";
cin >> number;
while(counter <= number){
    fact = fact*counter;
    counter++;
}
cout << fact;
return 0;
}
#include <iostream>
#include <cmath>
using namespace std;
int main(){
int n, odd_check;
cout << "Enter an integer to check if it is a prime number or not: ";
cin >> n;
if(n<=1 && n>0)
cout << n << " is not a prime number";
else if(n>1){
if(n%2==0 && n!=2)
cout << n << " is not a prime number.";
else if(n==2)
cout << n << " is a prime number.";
/*else if(n%2!=0){
    for(int i=3; i<=sqrt(n); i+=2)
    odd_check = n % i;
    if(odd_check!=0)
    cout << n << " is a prime number.";
    else
    cout << n << " is not a prime number.";
}   This is a correct way to write the program but not an efficient one, becuase we are checking numbers in the loop that are not necessary.*/
else if(n%2!=0){
    for(int i=3; i<=sqrt(n); i+=2){
        odd_check = n % i;
        if(odd_check==0){
        cout << n << " is not a prime number";
        return 0;}
}
        cout << n << " is a prime number.";
}   
}
else
cout << "Enter a positive integer";
    return 0;
}
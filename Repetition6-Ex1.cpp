#include <iostream>
#include <cmath>
using namespace std;
int main(){
int n, m, i=1;
cout << "Enter two integers n and m: ";
cin >> n >> m;
if (n <= 1 && m != 1) { cout << "The value of i is not found"; return 0; }
while(pow(n,i)!=m && pow(n,i)<m)
i++;
if(pow(n,i)==m)
cout << n << " raised to the power " << i << " = " << m;
else
cout << "The value of i is not found";
    return 0;
}
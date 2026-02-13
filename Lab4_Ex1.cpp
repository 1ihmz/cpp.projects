#include <iostream>
#include <cmath>
using namespace std;
int main(){
double n;
int sq;
cout << "Enter a number: ";
cin >> n;
sq = static_cast<int>(sqrt(abs(n)));
if(sq*sq==n)
 cout << "Perfect Square! "<< "The square roort of "<< n << " is " << sq;
 else
 cout << "Not a perfect square";    
    return 0;
}
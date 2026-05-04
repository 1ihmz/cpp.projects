#include <iostream>
using namespace std;
int main(){
int t1=1, t2=1, t3=2, tn, sum, k;
cout << "Enter n (Tribonacci term) and k (divisor): ";
cin >> tn >> k;
if(tn>=1 && k>1){
for(int i=4; i<=tn; i++){
    sum = t3 + t2 + t1;
    t1 = t2;
    t2 = t3;
    t3 = sum;
}
if(sum%k==0)
cout << "Yes, it satisfies the divisibility test";
else
cout << "No, it does not satisfy the divisibility test";
}
else
cout << "Invalid input";
    return 0;
}
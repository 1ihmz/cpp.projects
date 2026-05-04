#include <iostream>
using namespace std;
int main(){
int n, i=0, k;
cout << "Enter an integer number: ";
cin >> n;
cout << n << " is the multiple of: ";
for(k=1;k<=n;k++){
    if(n%k==0){
    if(k<n)
    cout << k << ", ";
    else
    cout << "and " << k;
    i++;}
}
cout << "\n\n" "We found " << i << " numbers that divide " << n << " evenly.";
    return 0;
}
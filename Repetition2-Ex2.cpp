#include <iostream>
using namespace std;
int main(){
int n,num;
cout << "Enter an integer: ";
cin >> n;
cout << n << " with digits reversed is ";
while(n!=0){
    num = n % 10;
    cout << num;
    n /= 10;
}
    return 0;
}
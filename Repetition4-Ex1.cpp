#include <iostream>
using namespace std;
int main(){
int n, i, fact=1;
cout << "Enter a positive integer: ";
cin >> n;
if(n>=0){
for(i=1;i<=n;i++){
fact *= i;
}
}
else{
cout << "Pick another integer (must be greater than or equal to zero)";
return 0;}
cout << n << "!= " << fact;
    return 0;
}
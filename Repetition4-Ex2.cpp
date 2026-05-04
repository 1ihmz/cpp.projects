#include <iostream>
#include <iomanip>
using namespace std;
int main(){
int n, i, fact=1;
cout << "Enter an integer: \n";
cin >> n;
if(n>=0){
cout << "Number" << setw(15) << "Factorial\n";
while(n!=-1){    
for(i=1;i<=n;i++){
fact *= i;
}
cout << n << setw(15) << fact << "\n";
n--;
fact=1;
}
}
else{
cout << "Pick another integer (must be greater than or equal to zero)";
return 1;}
    return 0;
}
#include <iostream>
using namespace std;
int main(){
int n, countN=0, countP=0;
cout << "Enter a list of negative and positive integers OR 0 to finish: ";
cin >> n;
while(n!=0){
    if(n>0)
    countP++;
    else if(n<0)
    countN++;
    cin >> n;
}
cout << "The total of negative numbers is: " << countN << "\n";
cout << "The total of positive numbers is: " << countP;
    return 0;
}
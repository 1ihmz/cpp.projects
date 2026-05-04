#include <iostream>
using namespace std;
int main(){
int n, m;
cout << "Enter two integers number: ";
cin >> n >> m;
if(n<m){
while(n<m-1){
    n++;
    cout << n << ' ';
}}
else{
    while(m<n-1){
        m++;
        cout << m << ' ';
    }
}
    return 0;
}
#include <iostream>
using namespace std;
int main()
{
bool isLockedOut = false;
int secret_code, attempts=0;
while(!isLockedOut){
    cout << "Enter the secret code: ";
    cin >> secret_code;
    attempts++;
    if(secret_code==1234){
    isLockedOut = true;
    cout << "Access Granted!";}
    if(attempts==3 && isLockedOut==false){
    isLockedOut = true;
    cout << "Try again later";}
}
    return 0;
}
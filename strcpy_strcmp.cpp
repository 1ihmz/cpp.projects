#include <iostream>
#include <cstring>
using namespace std;
int main(){
char savedPassword[] = "C++Rocks", userInput[20], loginLog[50];
cout << "Enter the password: ";
cin.getline(userInput, 20);
if(strcmp(userInput, savedPassword) == 0)
cout << "Access Granted!\n";
else
cout << "Access Denied!\n";
strcpy(loginLog, userInput); // strcpy(Destination, Source)
cout << "The last login attempt was recorded as: " << loginLog;
    return 0;
}
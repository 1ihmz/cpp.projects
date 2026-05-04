#include <iostream>
#include <cstring>
#include <cctype>
#include <iomanip>
using namespace std;
int main(){
    char fullName[50];
    char hobby[] = "Coding";
    int letter_num=0, char_num;
    float testScores[3], average, max=0, sum=0;
cout << "Enter your full name: ";
cin.getline(fullName, 50);
cout << "Enter 3 test scores: ";
for(int i=0; i<3; i++){
    cin >> testScores[i];
    sum += testScores[i];
    if(testScores[i]>max)
    max = testScores[i];
}
average = sum / 3.0;
char_num = strlen(fullName);
for(int i=0; i<char_num; i++){
    //if(fullName[i]>=65 && fullName[i]<=90 || fullName[i]>=97 && fullName[i]<=122)
    //if(isalpha(fullName[i]))
    if(fullName[i]!=' ')
    letter_num++;
}
cout << "Hello " << fullName << ',' << " your favorite hobby is " << hobby << "\n";
cout << "There are " << letter_num << " letters in your full name\n";
cout << showpoint << fixed << setprecision(1);
cout << "The average of your test scores is: " << average << "\n";
cout << "Your highest score was: " << max;
return 0;
}
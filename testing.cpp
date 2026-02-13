#include <iostream>
using namespace std;
int main(){
int sentinel=-100, count=0;
double grade, avg, sum=0;
cout << "Enter a grade ending with -100: ";
cin >> grade;
while(grade != sentinel){
    sum = sum + grade;
    count++;
    cout << "Enter a grade ending with -100: ";
    cin >> grade;
}
if(count != 0){
avg = sum / count;
cout << "The average of "<<count<<" students grades is "<<avg;}
else
cout << "No grades was entered";
return 0;
}
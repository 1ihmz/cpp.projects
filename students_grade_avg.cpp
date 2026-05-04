#include <iostream>
using namespace std;
int main(){
double total_sum = 0.0, average, grade;
for(int i=1;i<=5;i++){
cout << "Enter the grade: ";
cin >> grade;
total_sum += grade;
}
average = total_sum / 5.0;
cout << "The average of the grades is: " << average;
    return 0;
}
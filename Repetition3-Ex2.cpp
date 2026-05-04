#include <iostream>
#include <iomanip>
using namespace std;
int main(){
double avg;
int population, age, i=1, j=1, k=0, sum_of_ages=0;
cout << fixed << setprecision(2);
cout << "Enter the size of a population sample: ";
cin >> population;
while(i<=population){
    cout << "Enter the age of person # " << j << ": ";
    cin >> age;
    i++;
    j++;
    if(age>=18){
    k++;
    sum_of_ages += age;}
}
cout << "We have " << k << " adults in the population sample.\n";
if(k>0)
avg = static_cast<double>(sum_of_ages) / k;
else
avg = 0;
cout << "The average age of the adults is: " << avg;
    return 0;
}
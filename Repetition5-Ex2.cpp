#include <iostream>
using namespace std;
int main(){
int years=0;
double populationA, populationB, growth_rateA, growth_rateB;
cout << "Enter the current population of town A: ";
cin >> populationA;
cout << "Enter the current population of town B: ";
cin >> populationB;
cout << "Enter the growth rate of town A (%): ";
cin >> growth_rateA;
cout << "Enter the growth rate of town B (%): ";
cin >> growth_rateB;
while(populationA<populationB){
populationA = populationA + (populationA * growth_rateA / 100);
populationB = populationB + (populationB * growth_rateB / 100);
years++;
}
cout << "After " << years << " year(s), the population of town A will be greater than or equal to the population of town B.";
    return 0;
}
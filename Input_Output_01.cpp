#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;
int main(){
string id;
int number_of_bottles;
double cost, total_cost, overall_cost=0;
ifstream farm_input;
ofstream farm_output;
farm_input.open("farms.txt");
farm_output.open("farm.txt");
farm_output << setw(10) << "Farm ID." << setw(10) << "Bottles" << setw(10) << "Cost" << setw(16) << "Total Cost\n";
farm_output << "---------------------------------------------\n";
for(int i=0; i<3; i++){
    farm_input >> id >> number_of_bottles >> cost;
    total_cost = number_of_bottles * cost;
    farm_output << setw(10) << id << setw(10) << number_of_bottles << fixed << showpoint << setprecision(2) <<  setw(10) << cost <<  setw(16) << total_cost << "\n";
    overall_cost += total_cost;
}
farm_output << "\nThe overall cost: " << overall_cost;
farm_output.close();
farm_input.close();
    return 0;
}
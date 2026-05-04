#include <iostream>
#include <fstream>
using namespace std;
int main(){
int limit;    
double weight, total_mass=0;
ifstream chem;
ofstream result;
chem.open("data.input");
result.open("result.output");
//chem >> limit;
while(chem >> weight){ //This is a trick to use when you want to sum up all the numbers until the compiler doesn't read any
    //chem >> weight;
    total_mass += weight;
}
result << "Total Batch Mass: " << total_mass << " grams";
chem.close();
result.close();
    return 0;
}
#include <iostream>
using namespace std;
int main(){
int usage_time, extra_usage_time;
double rate, total_bill;
cout << "Enter the usage time in minutes: ";
cin >> usage_time;
if(usage_time <= 500)
total_bill = 40;
else if(usage_time > 500 && usage_time <2500){
extra_usage_time = usage_time - 500;
rate = 0.6 * extra_usage_time;
total_bill = 40 + rate;}
else if(usage_time >= 2500){
extra_usage_time = usage_time - 500;
rate = 0.6 * extra_usage_time;
total_bill = (40 + rate)*0.95;}
cout << "The total bill is " << total_bill << " AED";
    return 0;
}
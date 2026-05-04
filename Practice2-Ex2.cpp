#include <iostream>
using namespace std;
int main(){
char skill_level, insurance_type, retirement_choice;
int hours_worked, rate;
double net, total_pay, total_deduction, retirement_deduction;
cout << "Enter the skill level (1,2,3): ";
cin >> skill_level;
switch(skill_level){
    case '1':
    rate = 30;
    cout << "Enter the hours worked: ";
cin >> hours_worked;
if(hours_worked > 0 && hours_worked<=40){
total_pay = hours_worked*rate;}
else if(hours_worked>40){
total_pay = 40*rate + (hours_worked-40)*1.5*rate;}
else
    total_pay = 0;
net = total_pay;
cout << "Your total net for this week is: " << net;
    break;
    case '2':
    rate = 40;
    cout << "Enter the hours worked: ";
cin >> hours_worked;
if(hours_worked > 0 && hours_worked<=40){
total_pay = hours_worked*rate;}
else if(hours_worked>40){
total_pay = 40*rate + (hours_worked-40)*1.5*rate;}
else
    total_pay = 0;
cout << "Enter (0) for No Insurance\nEnter (1) for Medical Insurance\nEnter (2) for Dental Insurance\nEnter (3) for Disability Insurance: ";
cin >> insurance_type;
switch(insurance_type){
    case '0':
    total_deduction = 0;
    break;
    case '1':
    total_deduction = 60;
    break;
    case '2':
    total_deduction = 40;
    break;
    case '3':
    total_deduction = 25;
    break;
    default:
    cout << "Invalid Insurance Type";
return 0;
}
net = total_pay - total_deduction;
cout << "Your total net for this week is: " << net;
    break;
    case '3':
    rate = 50;
    cout << "Enter the hours worked: ";
cin >> hours_worked;
if(hours_worked > 0 && hours_worked<=40)
total_pay = hours_worked*rate;
else if(hours_worked>40)
total_pay = 40*rate + (hours_worked-40)*1.5*rate;
else
    total_pay = 0;
cout << "Enter (0) for No Insurance\nEnter (1) for Medical Insurance\nEnter (2) for Dental Insurance\nEnter (3) for Disability Insurance: ";
cin >> insurance_type;
switch(insurance_type){
    case '0':
    total_deduction = 0;
    break;
    case '1':
    total_deduction = 60;
    break;
    case '2':
    total_deduction = 40;
    break;
    case '3':
    total_deduction = 25;
    break;
    default:
    cout << "Invalid Insurance Type";
return 0;
}
cout << "Do you want to participate in the retirement plan? (y/n) ";
cin >> retirement_choice;
if(retirement_choice == 'y')
retirement_deduction = total_pay * 0.03;
else if(retirement_choice == 'n')
retirement_deduction = 0;
else
cout << "Invalid Choice";
return 0;
net = total_pay - (total_deduction+retirement_deduction);
cout << "Your total net for this week is: " << net;
    break;
    default:
    cout << "Invalid Skill Level";
}
return 0;
}
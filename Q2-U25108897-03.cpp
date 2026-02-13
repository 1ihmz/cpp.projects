#include <iostream>
using namespace std;

int main()
{
 int charging_time;
 double total_bill, rate, discount_amount;
 char charger_type; //Defined the charger type as a char because it is a single character.

 cout << "Enter the charger type: ";
 cin >> charger_type;
  cout << "Enter the charging time in minutes: ";
  cin >> charging_time;
   if(charger_type == 's') //Don't forget the single quote !
   rate = 0.25;
   else if(charger_type == 'f')
   rate = 0.60;
   else
   rate = 0;
   total_bill = rate * charging_time;
  cout << "The total cost before discount is " << total_bill << " AED" << endl;

  

   if(charging_time>=60 && charging_time<= 120)
   discount_amount = total_bill * 0.05;
   else if(charging_time>120)
   discount_amount = total_bill * 0.1;
   else
   discount_amount = 0;
   total_bill = total_bill - discount_amount;
     cout << "The total discount amount is " << discount_amount << " AED" << endl;
    cout << "The final cost is " << total_bill << " AED";

 
    return 0;
}
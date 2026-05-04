#include <iostream>
using namespace std;
int main(){
    int total_steps=0, goal, remaining_steps=0, taken_steps=0;
    cout << "What is your step goal for today? ";
    cin >> goal;
    while(total_steps<goal){
        cout << "How many steps did you just take? ";
        cin >> taken_steps;
        total_steps += taken_steps;
        if(total_steps<goal){
        remaining_steps = goal - total_steps;
        cout << "You still need " << remaining_steps << " steps to reach your goal for today. \n";}
    }
    cout << "Congratulations! You've hit your daily step goal for today.";
return 0;
}
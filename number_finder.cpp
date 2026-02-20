#include <iostream>
using namespace std;
int main()
{
int number, low=1,high=100;
string answer;
int count=0;
bool found = false; //initial expression
while(!found) //loop condition
{
  count++;
number=(low+high)/2;
cout<<"Is it "<<number<<'?'<<endl;
cin>>answer;
if(answer=="YES")
{
found = true; //update expression
cout<<"You found the number after "<<count<<" trials "<<endl;
}
else if(answer=="Low")
{
high=number-1;
}
else
low=number+1;
}
return 0;
}
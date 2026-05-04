#include <iostream>
using namespace std;
int main(){
double x , y;
cout << "Enter the coordinates (x,y): ";
cin >> x >> y;
if(x==0 && y==0)
cout << '(' << x << ',' << y << ')' << " is the origin";
else if(x>0 && y>0)
cout << '(' << x << ',' << y << ')' << " is in the first quadrant";
else if(x<0 && y>0)
cout << '(' << x << ',' << y << ')' << " is in the second quadrant";
else if(x<0 && y<0)
cout << '(' << x << ',' << y << ')' << " is in the third quadrant";
else if(x>0 && y<0)
cout << '(' << x << ',' << y << ')' << " is in the fourth quadrant";
else if(x==0 && y>0 || y<0)
cout << '(' << x << ',' << y << ')' << " is on the y-axis";
else
cout << '(' << x << ',' << y << ')' << " is on the x-axis";
return 0;
}
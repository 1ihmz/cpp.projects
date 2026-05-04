#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
double stdDeviation(double, double, double, double, double);
int main()
{
    double s, x1, x2, x3, x4, x5;
    cout << "Enter 5 numbers: ";
    cin >> x1 >> x2 >> x3 >> x4 >> x5;
    s = stdDeviation(x1, x2, x3, x4, x5);
    cout << "Standard Deviation: " << showpoint << fixed << setprecision(2) << s;
    return 0;
}
double stdDeviation(double x1, double x2, double x3, double x4, double x5)
{
    double x, s;
    x = (x1 + x2 + x3 + x4 + x5) / 5;
    s = sqrt((pow(x1 - x, 2) + pow(x2 - x, 2) + pow(x3 - x, 2) + pow(x4 - x, 2) + pow(x5 - x, 2)) / 5);
    return s;
}
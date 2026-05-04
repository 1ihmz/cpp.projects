#include <iostream>
using namespace std;
bool CountEvenDigits(int A, int B)
{
    int counterA = 0, counterB = 0, testA, testB;
    while (A != 0)
    {
        testA = A % 10;
        if (testA % 2 == 0)
            counterA++;
        A /= 10;
    }
    while (B != 0)
    {
        testB = B % 10;
        if (testB % 2 == 0)
            counterB++;
        B /= 10;
    }
    cout << "Even digits in first number: " << counterA;
    cout << "\nEven digits in second number: " << counterB;
    if (counterA == counterB)
        return true;
    else
        return false;
}
int main()
{
    int A, B;
    cout << "Enter first integer: ";
    cin >> A;
    cout << "Enter second integer: ";
    cin >> B;
    if (CountEvenDigits(A, B))
        cout << "\nBoth numbers have the same count of even digits." << endl;
    else
        cout << "\nThe numbers do not have the same count of even digits." << endl;
    return 0;
}
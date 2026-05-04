#include <iostream>
using namespace std;
int main()
{
    int A[6];
    int B[6] = {13, 6, 91, -8, 25, 62};
    int C[6];
    int counter = 1;
    for (int i = 0; i < 6; i++)
    {
        cout << "Enter element number " << counter << " of the first array: ";
        cin >> A[i];
    }
    cout << "   ***** Before swaping the two arrays *****\n";
    cout << "Elements of array A are:   ";
    for (int i = 0; i < 6; i++)
    {
        cout << A[i] << "   ";
    }
    cout << "\nElements of array B are:   ";
    for (int i = 0; i < 6; i++)
    {
        cout << B[i] << "   ";
    }
    cout << "\n   ***** After swaping the two arrays *****\n";
    for (int i = 0; i < 6; i++)
    {
        C[i] = A[i];
    }
    for (int i = 0; i < 6; i++)
    {
        A[i] = B[i];
    }
    for (int i = 0; i < 6; i++)
    {
        B[i] = C[i];
    }
    cout << "Elements of array A are:   ";
    for (int i = 0; i < 6; i++)
    {
        cout << A[i] << "   ";
    }
    cout << "\nElements of array B are:   ";
    for (int i = 0; i < 6; i++)
    {
        cout << B[i] << "   ";
    }
    return 0;
}
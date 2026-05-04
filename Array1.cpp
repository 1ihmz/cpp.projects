#include <iostream>
using namespace std;
int main()
{
    int test1[5], test2[5], sum[5];
    cout << "Enter marks for test 1: ";
    for (int i = 0; i < 5; i++)
    {
        cin >> test1[i];
    }
    cout << "Enter marks for test 2: ";
    for (int i = 0; i < 5; i++)
    {
        cin >> test2[i];
    }
    for (int i = 0; i < 5; i++)
    {
        sum[i] = test1[i] + test2[i];
    }
    cout << "The sum of both tests: \n\n";
    for (int i = 0; i < 5; i++)
    {
        cout << test1[i];
        if (i == 2)
        {
            cout << " + ";
            cout << test2[i];
            cout << " = " << sum[i] << "\n";
        }
        else
            cout << "   " << test2[i] << "   " << sum[i] << "\n";
    }
    return 0;
}
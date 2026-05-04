#include <iostream>
#include <cmath>
using namespace std;
void Prime(int, int);
int main()
{
    int n1, n2, divCounter = 0;
    cout << "Enter 2 integer numbers: ";
    cin >> n1 >> n2;
    Prime(n1, n2);
    return 0;
}
void Prime(int n1, int n2)
{
    int divCounter = 0;
    if (n2 > n1)
    {
        if (n1 % 2 == 0)
        {
            if (n2 % 2 == 0)
            {
                for (int i = n1 + 1; i <= n2 - 1; i += 2)
                {
                    for (int j = 1; j <= i; j += 2)
                    {
                        if (i % j == 0)
                            divCounter++;
                    }
                    if (divCounter == 2)
                        cout << i << " is a prime number.\n";
                    divCounter = 0;
                }
            }
            if (n2 % 2 != 0)
            {
                for (int i = n1 + 1; i <= n2 - 2; i += 2)
                {
                    for (int j = 1; j <= i; j += 2)
                    {
                        if (i % j == 0)
                            divCounter++;
                    }
                    if (divCounter == 2)
                        cout << i << " is a prime number.\n";
                    divCounter = 0;
                }
            }
        }
        else
        {
            if (n2 % 2 == 0)
            {
                for (int i = n1 + 2; i <= n2 - 1; i += 2)
                {
                    for (int j = 1; j <= i; j += 2)
                    {
                        if (i % j == 0)
                            divCounter++;
                    }
                    if (divCounter == 2)
                        cout << i << " is a prime number.\n";
                    divCounter = 0;
                }
            }
            if (n2 % 2 != 0)
            {
                for (int i = n1 + 2; i <= n2 - 2; i += 2)
                {
                    for (int j = 1; j <= i; j += 2)
                    {
                        if (i % j == 0)
                            divCounter++;
                    }
                    if (divCounter == 2)
                        cout << i << " is a prime number.\n";
                    divCounter = 0;
                }
            }
        }
    }
    else
        cout << "n2 must be > n1!!!";
}
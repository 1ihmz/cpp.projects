#include <iostream>
using namespace std;
int main()
{
    int newArray[20] = {0};
    int sum = 0, product = 1;
    cin >> newArray[0];
    if (newArray[0] > 0)
    {
        for (int i = 1; i < 20; i++)
        {
            cin >> newArray[i];
            if (newArray[i] <= 0)
                break;
        }
        for (int i = 0; i < 20; i += 2)
        {
            if (newArray[i] > 0)
                sum += newArray[i];
        }
        for (int i = 1; i < 20; i += 2)
        {
            if (newArray[i] > 0)
                product *= newArray[i];
        }
        cout << "The sum of the numbers at the even locations is " << sum << "\n";
        cout << "The product of the numbers at the odd locations is " << product;
    }

    return 0;
}
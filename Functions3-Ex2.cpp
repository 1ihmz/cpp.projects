#include <iostream>
#include <cstdlib>
#include <ctime>
int input(int n);
using namespace std;
int main()
{
    srand(time(0));
    int n;
    cout << "Enter how many numbers: ";
    cin >> n;
    cout << input(n);
    return 0;
}
int input(int n)
{
    int array[n], max;
    cout << "The generated numbers are: ";
    array[0] = rand() % (3088 - 17 + 1) + 17;
    max = array[0];
    cout << array[0] << "   ";
    for (int i = 1; i < n; i++)
    {
        array[i] = rand() % (3088 - 17 + 1) + 17;
        cout << array[i] << "   ";
        if (array[i] > max)
            max = array[i];
    }
    cout << "\nThe largest generated number is: ";
    return max;
}
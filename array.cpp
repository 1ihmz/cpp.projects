#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    double avg, sum = 0;
    int i, size, counter = 0;
    cout << showpoint << fixed << setprecision(2);
    cout << "Enter the size of the array: ";
    cin >> size;
    double sales[size];
    cout << "Enter the elements of the array: ";
    for (i = 0; i < size; i++)
        cin >> sales[i];
    // Find the average of the elements in sales
    for (i = 0; i < size; i++)
        sum += sales[i];
    avg = sum / 10;
    cout << "Average: " << avg << endl;
    // Find the elements that are larger than the average
    for (i = 0; i < size; i++)
    {
        if (sales[i] > avg)
            counter++;
    }
    cout << "There are " << counter << " elements larger than the average";
    cout << endl;
    // Find the reversed array
    cout << "Reversed array: ";
    for (i = size - 1; i >= 0; i--)
        cout << sales[i] << ' ';
}
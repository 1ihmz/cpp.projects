#include <iostream>
using namespace std;
const int NO_OF_MONTHS = 12;
void getData(int[][NO_OF_MONTHS]);
int indexLowTemp(int array[2][NO_OF_MONTHS]);
double averageHigh(int array[2][NO_OF_MONTHS]);
int main()
{
    int hiLowArray[2][NO_OF_MONTHS];
    int indexLow;
    getData(hiLowArray);
    cout << "Average high temperature: " << averageHigh(hiLowArray) << endl;
    indexLow = indexLowTemp(hiLowArray);
    cout << "Lowest temperature: " << indexLow << endl;
    return 0;
}
void getData(int array[2][NO_OF_MONTHS])
{
    cout << "Enter high temperature for each month: ";
    for (int i = 0; i < NO_OF_MONTHS; i++)
    {
        cin >> array[0][i];
    }
    cout << "Enter low temperature for each month: ";
    for (int i = 0; i < NO_OF_MONTHS; i++)
    {
        cin >> array[1][i];
    }
}
int indexLowTemp(int array[2][NO_OF_MONTHS])
{
    int low = array[1][0];
    for (int i = 1; i < NO_OF_MONTHS; i++)
    {
        if (array[1][i] < low)
        {
            low = array[1][i];
        }
    }
    return low;
}
double averageHigh(int array[2][NO_OF_MONTHS])
{
    int sum = 0;
    double average;
    for (int i = 0; i < NO_OF_MONTHS; i++)
    {
        sum += array[0][i];
    }
    average = sum * 1.0 / NO_OF_MONTHS;
    return average;
}
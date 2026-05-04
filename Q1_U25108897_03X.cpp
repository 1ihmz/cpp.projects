#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
using namespace std;
int main()
{
    srand(time(0));
    int read_num, min, max, sum = 0, counter = 0;
    double avg;
    cout << "Enter number of readings: ";
    cin >> read_num;
    cout << "Enter minimum temperature: ";
    cin >> min;
    cout << "Enter maximum temperature: ";
    cin >> max;
    cout << "\nGenerated temperature readings:\n";
    int temp[read_num];
    for (int i = 0; i < read_num; i++)
    {
        temp[i] = (rand() % (max - min + 1)) + min;
        sum += temp[i];
    }
    avg = sum * 1.0 / read_num * 1.0;
    for (int i = 0; i < read_num; i++)
    {
        cout << setw(4) << temp[i];
        if ((i + 1) % 8 == 0)
            cout << "\n";
        if (temp[i] > avg)
            counter++;
    }
    cout << "\n\nAverage temperature: " << showpoint << fixed << setprecision(2) << avg;
    cout << "\nReadings above average: " << fixed << setprecision(2) << counter;
    return 0;
}
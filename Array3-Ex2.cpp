#include <iostream>
#include <cstring>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
    srand(time(0));
    int cars[4][5];
    char names[4][20] = {"A. B. Ahmed", "O. M. Ali", "S. A. Saleh", "Q. Z. Banwan"};
    int salesAvg[4] = {0};
    int size = 5;

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cars[i][j] = rand() % 51;
        }
    }

    cout << "Jan" << setw(size) << "Feb" << setw(size) << "Mar" << setw(size) << "Apr" << setw(size) << "May" << "\n\n";

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << left << setw(size) << cars[i][j];
        }
        cout << "\n";
    }
    cout << "\nApproximate sales average by each salesperson:\n\n";

    for (int k = 0; k < 4; k++) // salesAvg[0]=(cars[0][0]+cars[0][1]+...)/5
    {
        for (int l = 0; l < 5; l++)
        {
            salesAvg[k] += cars[k][l];
        }
        salesAvg[k] /= 5;
    }
    for (int k = 0; k < 4; k++)
    {
        cout << left << setw(size+10) << names[k] << salesAvg[k] << "\n";
    }
    return 0;
}
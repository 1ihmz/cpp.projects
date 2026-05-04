#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;
void ReadMatrix(double array[][5], int N, int M);
double MinValue(double array[][5], int N, int M, int &minRow, int &minCol);
void AverageRow(double array[][5], int N, int M);
void ShowOutput(double array[][5], int N, int M, int minRow, int minCol);
int main()
{
    double Table[4][5];
    int r, c;
    ReadMatrix(Table, 4, 5);
    MinValue(Table, 4, 5, r, c);
    AverageRow(Table, 4, 5);
    ShowOutput(Table, 4, 5, r, c);
    return 0;
}
void ReadMatrix(double array[][5], int N, int M)
{
    srand(time(0));
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            array[i][j] = rand() % (50 - 10 + 1) + 10;
        }
    }
}
double MinValue(double array[][5], int N, int M, int &minRow, int &minCol)
{
    minRow = 0;
    minCol = 0;
    double min = array[0][0];
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            if (array[i][j] < min)
            {
                min = array[i][j];
                minRow = i;
                minCol = j;
            }
        }
    }
    return min;
}
void AverageRow(double array[][5], int N, int M)
{
    int sum[4] = {0};
    double avg[4] = {0};
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            sum[i] += array[i][j];
        }
        avg[i] = sum[i] / (M * 1.0);
    }
    for (int i = 0; i < N; i++)
    {
        cout << "Average of row " << i << " = " << avg[i] << "\n";
    }
}
void ShowOutput(double array[][5], int N, int M, int minRow, int minCol)
{
    cout << "\nMatrix:\n";
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cout << setw(6) << array[i][j];
        }
        cout << "\n";
    }
    cout << "Minimum value: " << array[minRow][minCol] << " at location (" << minRow << ", " << minCol << ')';
}
#include <iostream>
using namespace std;
int main()
{

    return 0;
}
int countEven(int array[][5], int row, int col)
{
    int counter = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (array[i][j] % 2 == 0)
                counter++;
        }
    }
    return counter;
}
void sumOfCol(int t[][5], int nrows, int ncols, int sum[])
{
    for (int i = 0; i < ncols; i++)
    {
        for (int j = 0; j < nrows; j++)
        {
            sum[nrows] += t[j][i];
        }
    }
}
void sumDiagonals(int t[][5], int nrows, int ncols, int &s1, int &s2)
{
    s1 = 0;
    s2 = 0;
    int j = 0;
    for (int i = 0; i < nrows; i++)
    {
        s1 += t[i][i];
    }
    for (int i = nrows; i >= nrows; i--)
    {
        s2 += t[i][j];
        j++;
    }
}

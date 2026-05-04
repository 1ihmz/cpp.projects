#include <iostream>
using namespace std;
int main() {

  const int rows = 7;
  const int columns = 5;
  int matrix[rows][columns], sum = 0, i = 0;

  int row = 4;
  int col = 2;
  /* // Setting row 5 (index 4) to zero
  for(int col = 0; col < columns; col++)
  matrix[row][col] = 0;

  // Printing row 5
  for(int i=0; i<columns; i++)
  cout << matrix[row][i] << ' ';

  // Setting column 3 (index 2) to zero
  for(row = 0; row < rows; row++)
  matrix[row][col] = 0;

  // Printing column 3
  for(int i=0; i<row; i++)
  cout << matrix[i][col] << "\n"; */

  // Setting every component in the matrix to zero
  for (row = 0; row < rows; row++) { // rowise processing
    for (col = 0; col < columns; col++)
      matrix[row][col] = i;
    i++;
  }

  // Printing the whole matrix
  for (row = 0; row < rows; row++) { // rowise processing
    for (col = 0; col < columns; col++)
      cout << matrix[row][col] << ' ';
    cout << "\n";
  }

  // Getting the sum of each row and column
  row = 6;
  for (col = 0; col < columns; col++)
    sum += matrix[row][col];
  cout << "\nSum of rows: " << sum;
  sum = 0;
  col = 0;
  for (row = 0; row < rows; row++)
    sum += matrix[row][col];
  cout << "\nSum of columns: " << sum;
  int max = matrix[0][0];
  for (row = 0; row < rows; row++) // rowise processing
  {
    for (col = 0; col < columns; col++)
      if (max < matrix[row][col])
        max = matrix[row][col];
  }
  cout << "\n" << "Max: " << max;
  return 0;
}
#include <iostream>
using namespace std;
int main(){

const int rows= 5;
const int columns= 5;
int matrix[rows][columns], sum=0;

int row;
int col;

for(row=0; row<rows; row++){
    for(col=0; col<columns; col++){
    if(row==col)
    matrix[row][col]=1;
    else
    matrix[row][col]=0;
}}
for(row=0; row<rows; row++){
    for(col=0; col<columns; col++){
        cout << matrix[row][col] << "\t";
        sum += matrix[row][col];
        }
        cout << "| Sum: " << sum;
        sum=0;
        cout << "\n";}
    return 0;
}
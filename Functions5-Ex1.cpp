#include <iostream>
using namespace std;
void printArray(int[], int);
int smallestIndex(int[], int);
int main()
{
    int ARRAY_SIZE = 15;
    int list[ARRAY_SIZE] = {56, 34, 67, 54, 23, 87, 66, 92, 15, 32, 55, 54, 88, 22, 30};
    cout << "List elements: ";
    printArray(list, ARRAY_SIZE);
    cout << endl;
    cout << "The position of the first occureenc of the smallest element in list is: " << smallestIndex(list, ARRAY_SIZE) << endl;
    cout << "The smallest element in list is: " << list[smallestIndex(list, ARRAY_SIZE)] << endl
         << endl;
    return 0;
}
void printArray(int array[], int arraySize)
{
    for (int i = 0; i < arraySize; i++)
    {
        cout << array[i] << ' ';
    }
}
int smallestIndex(int array[], int arraySize)
{
    int min, index;
    min = array[0];
    index = 0;
    for (int i = 1; i < arraySize; i++)
    {
        if (array[i] < min)
        {
            index = i;
            min = array[i];
        }
    }
    return index;
}
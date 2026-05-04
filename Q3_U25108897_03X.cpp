#include <iostream>
#include <cctype>
using namespace std;
int findDigits(const char[]);
int findCapital(const char[]);
int findSmall(const char[]);
int findSpaces(const char[]);
int findSymbols(const char[]);
int size = 50;
int main()
{
    char text[::size];
    cout << "Enter a line of text: ";
    cin.getline(text, ::size);
    cout << "\nThe stats of the input line:\n";
    cout << "Digits: " << findDigits(text);
    cout << "\nCapital letters: " << findCapital(text);
    cout << "\nSmall letters: " << findSmall(text);
    cout << "\nSpaces: " << findSpaces(text);
    cout << "\nSymbols: " << findSymbols(text);
    return 0;
}
int findDigits(const char array[])
{
    int counter = 0;
    for (int i = 0; array[i] != '\0'; i++)
    {
        if (isdigit(array[i]))
            counter++;
    }
    return counter;
}
int findCapital(const char array[])
{
    int counter = 0;
    for (int i = 0; array[i] != '\0'; i++)
    {
        if (isupper(array[i]))
            counter++;
    }
    return counter;
}
int findSmall(const char array[])
{
    int counter = 0;
    for (int i = 0; array[i] != '\0'; i++)
    {
        if (islower(array[i]))
            counter++;
    }
    return counter;
}
int findSpaces(const char array[])
{
    int counter = 0;
    for (int i = 0; array[i] != '\0'; i++)
    {
        if (isspace(array[i]))
            counter++;
    }
    return counter;
}
int findSymbols(const char array[])
{
    int counter = 0;
    for (int i = 0; array[i] != '\0'; i++)
    {
        if (ispunct(array[i]))
            counter++;
    }
    return counter;
}
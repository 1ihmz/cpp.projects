#include <iostream>
#include <cctype>
using namespace std;
int howManyLetters(string);
int main()
{
    string s;
    cout << "Enter a sentence: ";
    getline(cin, s);
    cout << "There are " << howManyLetters(s) << " letters in " << s;
    return 0;
}
int howManyLetters(string s)
{
    int counter = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (isalpha(s[i]))
            counter++;
    }
    return counter;
}
#include <iostream>
#include <cctype>
using namespace std;
void getCaseCount(int &, int &, int &);
int main()
{
    int upperCaseCount = 0, lowerCaseCount = 0, nonChars = 0;
    getCaseCount(upperCaseCount, lowerCaseCount, nonChars);
    cout << "The number of upper case letters: " << upperCaseCount << endl;
    cout << "The number of lower case letters: " << lowerCaseCount << endl;
    cout << "The number of non-letter input: " << nonChars << endl;
    return 0;
}
void getCaseCount(int &upperCaseCount, int &lowerCaseCount, int &nonChars)
{
    char ch;
    cout << "Enter input (# to stop): ";
    while(cin >> ch && ch != '#')
    {
        if (isupper(ch))
            upperCaseCount++;
        if (islower(ch))
            lowerCaseCount++;
        if (!isalpha(ch))
            nonChars++;
    }
}
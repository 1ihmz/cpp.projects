#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int size;
    bool isStrong = false;
    cout << "Enter the length of your password: ";
    cin >> size;
    cin.ignore();
    char password[size + 1];
    cout << "Enter a sequence of " << size << " characters: ";
    cin.getline(password, size + 1);
    for (int i = 0; i < size; i++)
    {
        if (isupper(password[i]))
        {
            isStrong = true;
            break;
        }
    }
    if (!isStrong)
    {
        cout << "Weak";
        return 0;
    }
    isStrong = false;
    for (int i = 0; i < size; i++)
    {
        if (islower(password[i]))
        {
            isStrong = true;
            break;
        }
    }
    if (!isStrong)
    {
        cout << "Weak";
        return 0;
    }
    isStrong = false;
    for (int i = 0; i < size; i++)
    {
        if (password[i] == '!' || password[i] == '@' || password[i] == '&')
        {
            isStrong = true;
            break;
        }
    }
    if (isStrong)
        cout << "Strong";
    else
        cout << "Weak";
    return 0;
}
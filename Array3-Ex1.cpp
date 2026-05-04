#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char tweet[141];
    int counter = 0;
    cout << "Enter your tweet: ";
    cin.getline(tweet, 141);
    for (int i = 0; i < strlen(tweet); i++)
    {
        // if (tweet[i] < 65 || tweet[i] > 90 && tweet[i] < 97 || tweet[i] > 122)
        if (!isalpha(tweet[i]))
            counter++;
    }
    cout << "There are " << counter << " non-alphabet characters in your tweet.";

    return 0;
}
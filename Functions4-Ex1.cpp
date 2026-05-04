#include <iostream>
using namespace std;
int to_seconds(int, int, int);
int main()
{
    int h, m, s;
    cout << "Enter hours, minutes, and seconds: ";
    cin >> h >> m >> s;
    cout << "Total seconds: " << to_seconds(h, m, s);
    return 0;
}
int to_seconds(int hours, int minutes, int seconds)
{
    hours *= 3600;
    minutes *= 60;
    seconds += hours + minutes;
    return seconds;
}
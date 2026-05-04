#include <iostream>
using namespace std;
void getLenWid(int &l, int &w)
{
    cout << "Enter length and width: ";
    cin >> l >> w;
}
void printRectangle(int l, int w)
{
    for (int i = 0; i < w; i++)
    {
        for (int j = 0; j < l; j++)
            cout << '*';
        cout << "\n";
    }
}
void printTriangle(int l)
{
    for (int i = 0; i < l; i++)
    {
        for (int j = l; j > i; j--)
            cout << '*';
        cout << "\n";
    }
}
int main()
{
    int l, w;
    getLenWid(l, w);
    printRectangle(l, w);
    printTriangle(l);
    return 0;
}

#include <iostream>
#include <iomanip>
using namespace std;
int convert(int);
int main()
{
int mile=0;
for(int i=0; i<=10; i++)
{
    cout << setw(3) << mile << " miles =" << setw(5) << convert(mile) << " kilometers\n";
    mile += 10;
}
    return 0;
}
int convert(int mile)
{
int x;
x = mile * 1.6;
return x;
}
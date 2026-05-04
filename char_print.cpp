#include <iomanip>
#include <iostream>

using namespace std;
int main() {
  char symbol;
  int nlines, lineNo, starNo;
  cout << "What character do you want to print? ";
  cin >> symbol;
  cout << "How many lines? ";
  cin >> nlines;
  for (lineNo = 1; lineNo <= nlines; lineNo++) {
    for (starNo = 1; starNo <= lineNo; starNo++)
      cout << symbol;
    cout << endl;
  }
  return 0;
}
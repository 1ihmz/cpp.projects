#include <iostream>
using namespace std;

int main()
{
 string name1, name2;
 char choice;
 cout << "Enter 2 names: ";
 cin >> name1 >> name2;
 cout << "Ascending or Descending (a / d)?: ";
 cin >> choice;
 if(choice == 'a' || choice == 'A')
 {
 if(name1<name2)
 cout << name1 << endl << name2 << endl;
 else
  cout << name2 << endl << name1 << endl;
 }
 else if(choice == 'd' || choice == 'D')
 {
 if(name1<name2)
  cout << name2 << endl << name1 << endl;
  else
   cout << name1 << endl << name2 << endl;
 }



    return 0;
}
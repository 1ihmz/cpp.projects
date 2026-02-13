#include <iostream>
using namespace std;

int main()
{
 int total_students, max_sections, students_per_sec, students_no_register;
 cout << "Enter the total number of students: ";
 cin >> total_students;
 cout << "Enter the maximum number of sections: ";
 cin >> max_sections;
 students_per_sec = total_students / max_sections;
 students_no_register = total_students % max_sections;
 cout << "Number of students per section is: " << students_per_sec << endl;
 cout << "Number of students that cannot register: " << students_no_register;
    return 0;
}
#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;
int main(){
string id, top_id="";
double midterm_mark, final_mark, coursework_mark, final_score, max_score=-1.0;
int j=0, k=0, limit;
ifstream assessment_in;
ofstream assessment_out;
assessment_in.open("assessments_2026.txt");
assessment_out.open("assessment_full_report_2026.txt");
assessment_out << "Full Assessment Report (Fall 2025/2026)\n";
assessment_out << "-------------------------------------------------------\n";
assessment_out << left << setw(12) << "ID";
assessment_out << left << setw(14) << "Course-Work";
assessment_out << left << setw(10) << "Midterm";
assessment_out << left << setw(8) << "Final";
assessment_out << right << setw(11) << "Final-Score\n";
assessment_in >> limit;
for(int i=0; i < limit; i++){
    assessment_in >> id >> coursework_mark >> midterm_mark >> final_mark;
    assessment_out << left << setw(12) << id << setw(14) << coursework_mark << setw(10) << midterm_mark << setw(9) << final_mark;
    if(coursework_mark >= 0 && coursework_mark <= 100 && midterm_mark >= 0 && midterm_mark <= 100 && final_mark >= 0 && final_mark <= 100){
    final_score = (coursework_mark * 30.0/100) + (midterm_mark * 30.0/100) + (final_mark * 40.0/100);
    assessment_out << showpoint << fixed << setprecision(1) << setw(12) << final_score << "\n";
    j++;
    assessment_out.unsetf(ios::fixed | ios::showpoint); // I added this line to reset the formating to default for printing the marks.
    assessment_out << setprecision(6);}
    else{
    assessment_out << "*** Invalid\n";
    k++;}
    if(final_score > max_score){
    max_score = final_score;
    top_id = id;
}
}
assessment_out << "\nTop Performing Student\n";
assessment_out << setw(12) << top_id << fixed << setprecision(1) << max_score << "\n";
assessment_out << "-----------------------\n\n";
assessment_out << "Total Valid Students Processed: " << j << "\n";
assessment_out << "Total Invalid Students Records: " << k;
assessment_out.close();
assessment_in.close();
    return 0;
}
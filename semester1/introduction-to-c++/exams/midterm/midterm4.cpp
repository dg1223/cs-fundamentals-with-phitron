#include <iostream>
#include <climits>
#include <cstring>

using namespace std;

int main(){
    int testcases;    
    cin >> testcases;    

    for (int i=0; i<testcases; i++){
        int best_student_id = -1;
        char best_student_name[100];
        char best_student_section = '\0';
        double highest_marks = INT_MIN;
        for (int j=0; j<3; j++){
            int id;
            char name[100];
            char section;
            double marks;

            cin >> id >> name >> section >> marks;

            int name_length = strlen(name);

            if (marks > highest_marks){
                best_student_id = id;
                strncpy(best_student_name, name, name_length);
                best_student_name[name_length] = '\0';
                best_student_section = section;
                highest_marks = marks;                
            }
            else if (marks == highest_marks && id < best_student_id) {
                best_student_id = id;
                strncpy(best_student_name, name, name_length);
                best_student_name[name_length] = '\0';
                best_student_section = section;
                highest_marks = marks; 
            }
        }
        cout << best_student_id << " " << best_student_name << " " << best_student_section << " " << highest_marks << endl;
    }
    return 0;
}
#include <iostream>
#include <string>

using namespace std;

class Student{
    public:
    string name;
    int roll;
    char section;
    double math_marks;
    int cls;

    Student(string name, int roll, char section, double math_marks, int cls){
        this->name = name;
        this->roll = roll;
        this->section = section;
        this->math_marks = math_marks;
        this->cls = cls;
    }
};

int main(){
    Student ram("Ram", 1, 'A', 98.5, 8);
    Student sham("Sham", 2, 'A', 100.00, 8);
    Student jodu("Jod", 3, 'A', 88.75, 8);

    int highest_mark = ram.math_marks;
    string best_student = ram.name;
    
    if (sham.math_marks > highest_mark){
        highest_mark = sham.math_marks;
        best_student = sham.name;
    }
    if (jodu.math_marks > highest_mark) {
        highest_mark = jodu.math_marks;
        best_student = jodu.name;
    }

    cout << best_student << " " << highest_mark << endl;

    return 0;
}
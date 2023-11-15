#include <iostream>

using namespace std;

class Student {
    public:
    int roll;
    int _class;
    double gpa;

    // constructor
    Student(int Roll, int Class, double cgpa){
        roll = Roll;
        _class = Class;
        gpa = cgpa;
    }
};

int main(){
    Student rahim(29, 9, 5.00);
    Student karim(45, 10, 4.33);
    cout << rahim.roll << " " << rahim._class << " " << rahim.gpa << endl;
    cout << karim.roll << " " << karim._class << " " << karim.gpa << endl;
    
    // Student rahim;
    // rahim.roll = 29;
    // rahim._class = 9;
    // rahim.gpa = 5.00;

    // Student karim;
    // karim.roll = 45;
    // karim._class = 10;
    // karim.gpa = 4.33;

    return 0;
}
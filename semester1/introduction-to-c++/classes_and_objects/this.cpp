#include <iostream>

using namespace std;

class Student {
    public:
    int roll;
    int _class;
    double gpa;

    // to use the same variable names, we need to
    // point to the constructor variables of the 
    // current object using the 'this' pointer
    Student(int roll, int _class, double gpa){
        this->roll;
        this->_class;
        this->gpa;

        // (*this).roll = roll;
        // (*this)._class = _class;
        // (*this).gpa = gpa;

        // roll = roll;
        // _class = _class;
        // gpa = gpa;
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
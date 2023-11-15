#include <iostream>

using namespace std;

class Student {
    public:
    int roll;
    int cls;
    double gpa;

    Student(int roll, int cls, double gpa){
        this->roll = roll;
        this->cls = cls;
        this->gpa = gpa;
    }
};

Student* fun() {
    Student rahim(342, 5, 4.99);
    Student* p = &rahim;
    return p;
}

int main(){
    Student rahim(342, 10, 4.55);
    Student* karim = new Student(342, 10, 4.55);
    cout << karim->roll << " " << karim->cls << " " << karim->gpa << endl;
    return 0;
}
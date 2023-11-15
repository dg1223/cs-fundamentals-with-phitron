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
    Student *rahim = new Student(342, 5, 4.99);
    // Student* p = &rahim;
    return rahim;
}

int main(){
    Student *answer = fun();    
    cout << answer->roll << " " << answer->cls << " " << answer->gpa << endl;
    delete answer;
    cout << answer->roll << " " << answer->cls << " " << answer->gpa << endl;
    return 0;
}
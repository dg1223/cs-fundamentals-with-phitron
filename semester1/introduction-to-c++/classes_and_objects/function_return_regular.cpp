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

Student fun() {
    Student rahim(342, 5, 4.99);
    return rahim;
}

int main(){
    Student answer = fun();
    cout << answer.roll << " " << answer.cls << " " << answer.gpa << endl;
    return 0;
}
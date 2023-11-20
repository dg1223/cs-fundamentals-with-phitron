#include <iostream>

using namespace std;

class Person{
    public:
        string name;
        int age;
        int marks1;
        int marks2;
    
    Person(string Name, int Ag, int m1, int m2){
        name = Name;
        age = Ag;
        marks1 = m1;
        marks2 = m2;
    }

    void hello(){
        cout << name << " " << age << endl;
    }

    int total_marks(){
        return marks1 + marks2;
    }
};

int main(){
    Person rakib("rakib", 25, 95, 85);
    // rakib.hello();
    cout << rakib.total_marks() << endl;
    return 0;
}
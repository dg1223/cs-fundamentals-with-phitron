#include <iostream>

using namespace std;

class Person{
    public:
        string name;
        int age;
    
    Person(string name, int age){
        this->name = name;
        this->age = age;
    }
};

int main(){
    Person *rakib = new Person("Rakib", 25);
    Person *sakib = new Person("Sakib", 23);

    // never do the following for dynamic object
    // rakib = sakib;
    // cout << rakib->name << " " << rakib->age << endl;

    /*
    WHY? -> you'll get segmentation fault because
    rakib is pointing to sakib's memory address
    but you have deleted sakib from memory. So,
    rakib has become as orphaned object
    Uncomment the following codeblock and test it
    */ 
    // rakib = sakib;
    // delete sakib;
    // cout << rakib->name << " " << rakib->age << endl;

    // How to do it properly
    // rakib->name = sakib->name;
    // rakib->age = sakib->age;
    // delete sakib;
    // cout << rakib->name << " " << rakib->age << endl;

    // easier way
    *rakib = *sakib;
    delete sakib;
    cout << rakib->name << " " << rakib->age << endl;

    return 0;
}
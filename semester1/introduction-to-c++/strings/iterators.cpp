#include <iostream>

using namespace std;

int main(){
    string s = "hello";
    string:: iterator it;

    for (it=s.begin(); it<s.end(); it++){
        cout << *it << endl;
    }

    // the for loop above can also be written directly as:
    for (string::iterator that=s.begin(); that<s.end(); that++){
        cout << *that << endl;
    }

    // C++ 14+ makes it even shorter by automatically detecting if
    // the variable is an iterator or not
    for (auto what=s.begin(); what<s.end(); what++){
        cout << *what << endl;
    }

    return 0;
}
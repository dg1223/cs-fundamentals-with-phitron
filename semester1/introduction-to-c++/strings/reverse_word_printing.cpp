#include <iostream>
#include <sstream>

using namespace std;

void print(stringstream &ss){
    string word;
    if (ss >> word){
        // print as given in input
        // cout << word << endl;
        // print(ss);

        // print reverse
        print(ss);
        cout << word << endl;
    }
}

int main(){
    string s;
    getline(cin, s);
    stringstream ss(s);
    print(ss);
    return 0;
}
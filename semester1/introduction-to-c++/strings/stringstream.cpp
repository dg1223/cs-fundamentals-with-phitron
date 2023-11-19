#include <iostream>
#include <sstream>

using namespace std;

int main(){
    string s;
    getline(cin, s);
    stringstream ss(s); // same as: ss << s;
    string word;

    // ss >> word;
    // cout << word << endl;
    // ss >> word;
    // cout << word << endl;
    // ss >> word;
    // cout << word << endl;
    
    int count = 0;
    while (ss >> word){
        cout << word << endl;
        count++;
    }

    cout << count << endl;
    return 0;
}
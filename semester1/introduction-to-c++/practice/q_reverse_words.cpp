#include <iostream>
#include <sstream>

using namespace std;

int main(){
    string s;
    getline(cin, s);
    stringstream ss(s);
    string word;
    bool firstWord = true;
    while (ss >> word){
        if (!firstWord){
            cout << " ";
        }
        else {
            firstWord = false;
        }

        for (int i=word.size()-1; i>=0; i--){
            cout << word[i];
        }        
    }
    return 0;
}
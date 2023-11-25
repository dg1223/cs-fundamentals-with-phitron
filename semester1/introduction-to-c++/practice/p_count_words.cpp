#include <iostream>

using namespace std;

int main(){
    string s;
    getline(cin, s);
    int count = 0;
    bool found = false;
    for (char c:s){
        if (isalpha(c)){
            if (!found){
                found = true;
                count++;
            }
        }
        else {
            found = false;
        }
    }


    cout << count;
    return 0;
}
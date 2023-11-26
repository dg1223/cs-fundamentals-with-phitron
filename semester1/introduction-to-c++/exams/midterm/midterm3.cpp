#include <iostream>
#include <algorithm>
#include <cstring>
#include <cmath>

using namespace std;

int main(){
    int size = pow(10, 5) + 1;
    char s[size];

    while (cin.getline(s, size)){
        int length = strlen(s);
        sort(s, s + length);

        for (int i=0; i<length; i++){
            if (s[i] == ' '){
                continue;
            }
            cout << s[i];
        }
        cout << endl;
    }

    return 0;
}
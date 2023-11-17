#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;

    /*
    If you try to take the entire string as input,
    you'll get memory limit exceeded if the input
    size is greater than 10^7 due to memory size
    limitations of docker containers used by 
    coding platforms like Hackerrank and Codeforces.
    */
    // string s;
    // char s[n];
    // cin >> s;

    int alphabet[26] = {0};
    for (int i=0; i<n; i++){
        char s;
        cin >> s;
        int ascii = s;
        int index = ascii - 97;
        alphabet[index]++;
    }

    // frequency array
    for (int i=0; i<26; i++){
        while (alphabet[i] != 0){
            char result = i + 97;
            cout << result;
            alphabet[i]--;
        }
    }

    return 0;
}
#include <iostream>

using namespace std;

int main(){
    int testcases;
    cin >> testcases;
    for (int i=0; i<testcases; i++){
        int string_length;
        cin >> string_length;
        string s;
        cin >> s;
        char freq[26] = {0};
        int balloons = 0;

        for (int i=0; i<string_length; i++){
            int index = s[i] - 65;
            freq[index]++;
        }

        for (int i=0; i<26; i++){
            if (freq[i] == 0){
                continue;
            }
            else {
                balloons += freq[i]+1;
            }
        }

        cout << balloons << endl;
    }
    return 0;
}
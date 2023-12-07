#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    string s;
    cin >> s;

    int num_alphabets = 26;

    vector<char> alphabets;
    vector<int> freq_array(num_alphabets, 0);

    for (int i=0; i<num_alphabets; i++){
        char letter = i + 97;
        alphabets.push_back(letter);
    }

    for (char c:s){
        int index = c - 97;
        freq_array[index]++;
    }

    for (int i=0; i<num_alphabets; i++){
        int count = freq_array[i];
        if (count > 0){
            cout << alphabets[i] << " : " << count << endl;
        }
    }


    return 0;
}
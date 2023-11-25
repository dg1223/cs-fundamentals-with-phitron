#include <iostream>
#include <algorithm>

using namespace std;

class Freq{
    public:
        char value;
        int count;
};

bool cmp(Freq a, Freq b){
    if (a.count == b.count){
        return a.value < b.value;
    }
    else {        
        return a.count > b.count;
    }
}

int main(){
    string s;
    cin >> s;

    Freq f[26];
    for (int i=0; i<26; i++){
        f[i].value = char(i + 'a');
        f[i].count = 0;
    }

    for (char c:s) {
        int ascii = c - 'a';
        f[ascii].count++;
    }

    sort(f, f+26, cmp);

    for (int i=0; i<26; i++){
        if (f[i].count > 0){
            // cout << f[i].value << " " << f[i].count << endl;
            for (int j=0; j<f[i].count; j++){
                cout << f[i].value;
            }
        }
    }


    return 0;
}
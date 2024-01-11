#include <iostream>
#include <sstream>
#include <map>

using namespace std;

int main(){
    string sentence;
    getline(cin, sentence);
    string word;
    stringstream ss(sentence);

    map<string, int> mp;

    while (ss >> word)
    {
        // by default, all values are 0 in a map
        mp[word]++;
    }

    for (auto it = mp.begin(); it != mp.end(); it++)
    {
        // cout << it->first << " " << it->second << endl;
        cout << mp["love"] << endl;
    }    
    
    return 0;
}
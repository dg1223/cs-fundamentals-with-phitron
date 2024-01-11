#include <iostream>
#include <map>

using namespace std;

int main(){
    map<string, int> mp;

    // mp.insert({"Shakib-al Hasan", 75});
    // mp.insert({"Tamim Iqbal", 19});
    // mp.insert({"Shamim", 79});
    // mp.insert({"akib", 0});
    mp["Shakib-al Hasan"] = 75; // O(logN)
    mp["Tamim Iqbal"] = 19;
    mp["Shamim"] = 79;
    mp["akib"] = 0;

    for (auto it = mp.begin(); it != mp.end(); it++)
    {
        cout << it->first << " " << it->second << endl; // O(logN)
    }
    

    cout << mp["Shamim"] << endl;
    cout << mp["someone else"] << endl; // result 0 but if confusing if a value is 0 for a key
    if (mp.count("akib")){
        cout << "value present" << endl;
    }
    else {
        cout << "value not present" << endl;
    }

    return 0;
}
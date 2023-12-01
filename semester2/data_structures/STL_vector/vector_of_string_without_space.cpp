#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n;

    // considers every space as the end of one string
    cin >> n;

    vector<string> v;

    for (int i=0; i<n; i++){
        string s;
        cin >> s;
        v.push_back(s);
    }

    // // method 1 to print vector of string
    // for (int i=0; i<v.size(); i++){
    //     cout << v[i] << endl;
    // }

    // method 2
    for(string val:v) {
        cout << val <<endl;
    }
    

    return 0;
}
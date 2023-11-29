#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    vector<int> v;

    // // method 1
    // int n;
    // cin >> n;
    // for (int i=0; i<n; i++){
    //     int x;
    //     cin >> x;
    //     v.push_back(x);
    // }
    // for(int val:v) {
    //     cout << val << " ";
    // }

    // method 2
    int n;
    cin >> n;

    vector<int> v(n); // NOTE: first bracket/parenthesis
    for (int i=0; i<n; i++){
        cin >> v[i];
    }

    for(int val:v) {
        cout << val << " ";
    }
    
    return 0;
}
#include <iostream>
#include <set>

using namespace std;

int main(){
    set<int> s;
    int n;
    cin >> n;

    // insert
    while (n--){
        int x;
        cin >> x;
        s.insert(x); // O(logN)
    }

    // searching
    cout << s.count(100) << endl; // O(logN), always 0 or 1
    if (s.count(10)){
        cout << "yes" << endl;
    }
    else {
        cout << "no" << endl;
    }

    // prints in-order
    for (auto it = s.begin(); it != s.end(); it++)
    {
        cout << *it << endl;
    }
    

    return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    vector<int> v = {1, 2, 2, 3, 3, 2, 2, 4, 5, 2};

    // vector<int>:: iterator it;
    // it = find(v.begin(), v.end(), 5);

    // the code above can be written as
    auto it = find(v.begin(), v.end(), 10);

    cout << *it << endl;

    // how to search
    if (it == v.end()){
        cout << "Not found" << endl;
    }
    else {
        cout << "Found" << endl;
    }
    
    return 0;
}
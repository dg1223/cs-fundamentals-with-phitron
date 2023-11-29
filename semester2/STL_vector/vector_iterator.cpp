#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    vector<int> v = {1, 2, 2, 3, 3, 2, 2, 4, 5, 2};

    for (auto it=v.begin(); it<v.end(); it++){
        cout << *it << " ";
    }
    cout << endl;
    
    return 0;
}
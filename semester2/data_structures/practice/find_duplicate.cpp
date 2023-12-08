#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> hashmap;

    // a
    for (int i=0; i<n; i++){
        cin >> a[i];
    }

    bool HAS_DUPLICATE = false;

    for (int i=0; i<n; i++){
        auto it = find(hashmap.begin(), hashmap.end(), a[i]);
        if (it != hashmap.end()){
            HAS_DUPLICATE = true;
            break;
        }
        else {
            hashmap.push_back(a[i]);
        }
    }

    // for (int i=0; i<hashmap.size(); i++){
    //     cout << hashmap[i] << " " << endl;
    // }

    if (HAS_DUPLICATE){
        cout << "YES";
    }
    else {
        cout << "NO";
    }



    return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int testcases;
    cin >> testcases;
    for (int i=0; i<testcases; i++){
        int n;
        cin >> n;
        vector<int> a(n);

        // a
        for (int i=0; i<n; i++){
            cin >> a[i];
        }

        bool IS_SORTED = true;
        for (int i=0; i<n-1; i++){
            if (a[i] > a[i+1]){
                IS_SORTED = false;
                break;
            }
        }

        if (IS_SORTED){
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }



    return 0;
}
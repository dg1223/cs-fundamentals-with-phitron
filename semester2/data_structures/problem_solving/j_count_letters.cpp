#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> a(n);

    // a
    for (int i=0; i<n; i++){
        cin >> a[i];
    }

    int count = 0;
    for (int i=0; i<n; i++){
        int next = a[i] + 1;
        auto it = find(a.begin(), a.end(), next);
        if (it != a.end()){
            count++;
        }
    }

    cout << count;



    return 0;
}
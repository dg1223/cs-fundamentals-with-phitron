#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){    
    // a
    int n;
    cin >> n;
    vector<int> a(n);
    
    for (int i=0; i<n; i++){
        cin >> a[i];
    }

    // b
    int m;
    cin >> m;
    vector<int> b(m);

    for (int i=0; i<m; i++){
        cin >> b[i];
    }

    // x
    int x;
    cin >> x;

    a.insert(a.begin() + x, b.begin(), b.end());

    for (int i=0; i<a.size(); i++){
        cout << a[i] << " ";
    }


    return 0;
}
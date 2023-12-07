#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> b(n);
    vector<int> c(n*2);
    // a
    for (int i=0; i<n; i++){
        cin >> a[i];
    }
    // b
    for (int i=0; i<n; i++){
        cin >> b[i];
    }
    c.insert(c.begin(), b.begin(), b.end());
    c.insert(c.begin() + n, a.begin(), a.end());

    for (int i=0; i<n*2; i++){
        cout << c[i] << " ";
    }



    return 0;
}
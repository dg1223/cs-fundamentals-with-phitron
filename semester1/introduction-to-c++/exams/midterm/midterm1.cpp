#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n];
    for (int i=0; i<n; i++){
        cin >> a[i];
    }

    // ascending sort
    sort(a, a+n);
    for (int i=0; i<n; i++){
        if (i == n-1){
            cout << a[i];
        }
        else {            
            cout << a[i] << " ";
        }
    }

    cout << endl;

    // descending sort
    sort(a, a+n, greater<int>());
    for (int i=0; i<n; i++){
        if (i == n-1){
            cout << a[i];
        }
        else {            
            cout << a[i] << " ";
        }
    }

    return 0;
}
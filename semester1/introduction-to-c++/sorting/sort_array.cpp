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
    sort(a, a+3); // ascending sort
    sort(a, a+3, greater<int>()); // descending sort
    for (int i=0; i<n; i++){
        cout << a[i] << " " << endl;
    }
    return 0;
}
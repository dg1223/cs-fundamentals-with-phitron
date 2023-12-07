#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> a(n);

    // a
    for (int i=0; i<n; i++){
        cin >> a[i];
    }

    for (int i=0; i<n; i++){
        if (a[i] > 0){
            a[i] = 1;
        }
        else if (a[i] < 0) {
            a[i] = 2;
        }
    }

    for (int i=0; i<n; i++){
        cout << a[i] << " ";
    }



    return 0;
}
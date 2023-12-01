#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int n, q;
    cin >> n >> q;
    int a[n];
    for (int i=0; i<n; i++){
        cin >> a[i];
    }

    sort(a, a+n);

    while (q--){
        int x;
        cin >> x;

        // binary search
        int l = 0, r = n-1;
        bool flag = false;
        while (l <= r){
            int mid = (l + r) / 2;
            if (a[mid] == x){
                flag = true;
                break;
            }
            if (x > a[mid]){
                l = mid + 1;
            }
            else {
                r = mid - 1;
            }
        }

        if (flag == true){
            cout << "found" << endl;
        }
        else {
            cout << "not found" << endl;
        }

    }
    return 0;
}
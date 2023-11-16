// O(NlogN) time, O(N) auxillary space

#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int testcases;
    cin >> testcases;
    for (int x=0; x<testcases; x++){
        int n;
        cin >> n;
        int a[n];
        for (int i=0; i<n; i++){
            cin >> a[i];
        }

        // make a copy to refer to original indices
        // similar to a hash map
        // This is O(N) auxillary space
        int b[n];
        for (int i=0; i<n; i++){
            b[i] = a[i];
        }

        // Sorting is O(NlogN) time
        sort(a, a+n);

        int smallest_sum = a[0] + a[1];

        // find original indices
        int temp1, temp2;
        for (int x=0; x<n; x++){
            if (b[x] == a[0]){
                temp1 = x;
            }
            else if (b[x] == a[1]) {
                temp2 = x;
                
            }
        }

        int i, j;
        if (temp1 < temp2){
            i = temp1;
            j = temp2;
        }
        else {
            i = temp2;
            j = temp1;
        }

        cout << smallest_sum + j - i << endl;
    }

    return 0;
}
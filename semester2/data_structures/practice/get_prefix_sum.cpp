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

    vector<long int> prefix_sum(n);
    prefix_sum[0] = a[0];

    for (int i=1; i<n; i++){
        int previous = i - 1;
        prefix_sum[i] = a[i] + prefix_sum[previous];
    }

    for (int i=n-1; i>=0; i--){
        cout << prefix_sum[i] << " ";
    }



    return 0;
}
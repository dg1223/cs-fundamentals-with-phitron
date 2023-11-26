#include <iostream>
#include <algorithm>

using namespace std;

int *sort_it(int n){
    int *a = new int[n];
    for (int i=0; i<n; i++){
        cin >> a[i];
    }

    // descending sort
    sort(a, a+n, greater<int>());    

    return a;
}

int main(){
    int n;
    cin >> n;

    int *array = sort_it(n);

    for (int i=0; i<n; i++){
        if (i == n-1){
            cout << array[i];
        }
        else {            
            cout << array[i] << " ";
        }
    }

    return 0;
}
// O(N^2) time, O(1) space

#include <iostream>
#include <climits>

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

        int smallest = INT_MAX;
        for (int i=0; i<n; i++){
            for (int j=i+1; j<n; j++){
                int result = a[i] + a[j] + j - i;
                if (result < smallest){
                    smallest = result;
                }
            }
        }

        cout << smallest << endl;
    }

    return 0;
}
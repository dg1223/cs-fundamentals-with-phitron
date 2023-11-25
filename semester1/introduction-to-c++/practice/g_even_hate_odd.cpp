#include <iostream>

using namespace std;

int main(){
    int testcases;
    cin >> testcases;
    for (int i=0; i<testcases; i++){
        int n;
        cin >> n;
        int arr[n];
        for (int i=0; i<n; i++){
            cin >> arr[i];
        }

        // int target = n / 2;
        int even = 0, odd = 0;
        for (int i=0; i<n; i++){
            if (arr[i] % 2 == 0){
                even++;
            }
            else {
                odd++;
            }
        }
        int difference = abs(even - odd);
        // int result = difference - target;
        if (difference % 2 != 0){
            cout << -1;
        }
        else {
            int result = difference / 2;
            cout << result;
        }
        
        cout << endl;
    }

    return 0;
}
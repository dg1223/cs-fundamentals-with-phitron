#include <iostream>

using namespace std;

int main(){
    int n, count = 0;
    cin >> n;
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=i; j++){
            count++;
            cout << "i = " << i << ", " << "j = " << j << endl;
        }
    }
    cout << "count = " << count << endl;
    return 0;
}
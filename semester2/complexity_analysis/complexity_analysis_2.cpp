#include <iostream>

using namespace std;

int main(){
    int n, count = 0;
    cin >> n;
    for(int i=1; i*2<=n; i++) {
        count++;
        // cout << "i = " << i << endl;
    }
    cout << "count = " << count << endl;
    return 0;
}
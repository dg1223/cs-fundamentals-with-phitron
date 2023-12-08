#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    // Input N
    int n;
    cin >> n;

    vector<string> pattern(n, string(n, ' '));

    for (int i = 0; i < n; ++i) {
        pattern[i][i] = '\\';
        pattern[i][n - i - 1] = '/';
    }

    // X
    int middle = n / 2;
    pattern[middle][middle] = 'X';


    for (int i = 0; i < n; ++i) {
        cout << pattern[i] << endl;
    }

    return 0;
}

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    // Input N
    int n;
    cin >> n;

    // Check if N is odd
    if (n % 2 == 0) {
        cerr << "Input must be an odd integer." << endl;
        return 1;
    }

    // Initialize the pattern
    vector<string> pattern(n, string(n, ' '));

    // Fill the pattern
    for (int i = 0; i < n; ++i) {
        pattern[i][i] = '\\';
        pattern[i][n - i - 1] = '/';
    }

    // Place the X in the middle
    int middle = n / 2;
    pattern[middle][middle] = 'X';

    // Output the pattern
    for (int i = 0; i < n; ++i) {
        cout << pattern[i] << endl;
    }

    return 0;
}

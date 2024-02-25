/*
Do a diff with subset sum bottom up to understand
*/

// In how many ways can you get to the sum?

#include <iostream>

using namespace std;

// for memoization
int dp[1005][1005];

int subset_sum(int n, int a[], int s){
    // base case
    if (n == 0){
        if (s == 0){
            return 1;
        }
        else {
            return 0;
        }
    }

    // use memoization
    int dp_current = dp[n][s];
    if (dp_current != -1){
        return dp_current;
    }
    // if current value is within sum
    int op2 = subset_sum(n-1, a, s);
    if (a[n-1] <= s){
        int op1 = subset_sum(n-1, a, s-a[n-1]);
        // bool op2 = subset_sum(n-1, a, s);
        return dp[n][s] = op1 + op2;
    }
    else {
        return dp[n][s] = op2;
    }
}

int main(){
    int n;
    cin >> n;
    int a[n];

    for (int i=0; i<n; i++){
        cin >> a[i];
    }

    // sum
    int s;
    cin >> s;

    for (int i=0; i<=n; i++){
        for (int j=0; j<=s; j++){
            dp[i][j] = -1;
        }
    }

    cout << subset_sum(n, a, s);

    // if (dp[n][s]){
    //     cout << "YES" << endl;
    // }
    // else {
    //     cout << "NO" << endl;
    // }

    return 0;
}

/*
4
1 2 4 6
7
*/

/*
6
1 2 3 4 5 6
7
*/
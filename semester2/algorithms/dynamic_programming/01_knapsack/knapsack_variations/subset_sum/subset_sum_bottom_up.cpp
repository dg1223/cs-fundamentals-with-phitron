/*
VERY CONFUSING!!!
NEED BETTER EXPLANATION
*/

// Does a subset exist that add up to the desired sum?

#include <iostream>

using namespace std;

// for memoization
int dp[1005][1005];

bool subset_sum(int n, int a[], int s){
    // base case
    if (n == 0){
        return s == 0;
    }

    // use memoization
    int dp_current = dp[n][s];
    if (dp_current != -1){
        return dp_current;
    }
    // if current value is within sum
    bool op2 = subset_sum(n-1, a, s);
    if (a[n-1] <= s){
        bool op1 = subset_sum(n-1, a, s-a[n-1]);
        // bool op2 = subset_sum(n-1, a, s);
        return dp[n][s] = op1 || op2;
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

    bool dp[n+1][s+1];
    dp[0][0] = true;
    for (int i=1; i<=s; i++){
        dp[0][i] = false;
    }

    for (int i=1; i<=n; i++){
        for (int j=0; j<=s; j++){
            if (a[i-1] <= j){
                dp[i][j] = dp[i-1][j-a[i-1]] || dp[i-1][j];
            }
            else {
                dp[i][j] = dp[i-1][j];
            }
        }
    }

    // // to print and understand the subset matrix
    // for (int i=0; i<=n; i++){
    //     for (int j=0; j<=s; j++){
    //         if (dp[i][j]){
    //             cout << "T ";
    //         }
    //         else {
    //             cout << "F ";
    //         }
    //     }
    //     cout << endl;
    // }

    if (subset_sum(n, a, s)){
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }

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
1 2 3 6
7
*/
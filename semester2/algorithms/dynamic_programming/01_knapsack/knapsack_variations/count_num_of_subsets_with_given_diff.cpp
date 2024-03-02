/*
Same as count subset sum problem with target sum
calculated by:
target_sum = (given_difference + sum_of_all_items) / 2

See notes for the algebraic solution that produces
this equation
*/

// How many subsets add up to the desired the sum?

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
    int a[n], s = 0;

    for (int i=0; i<n; i++){
        cin >> a[i];
        // calculate sum of items
        s += a[i];
    }

    for (int i=0; i<=n; i++){
        for (int j=0; j<=s; j++){
            dp[i][j] = -1;
        }
    }

    // diff
    int diff;
    cin >> diff;

    // calculate the target sum of one subset
    int s1 = (diff + s) / 2;

    // number of subsets that can produce the target sum
    cout << subset_sum(n, a, s1);

    return 0;
}

/*
4
1 1 2 3
1
*/
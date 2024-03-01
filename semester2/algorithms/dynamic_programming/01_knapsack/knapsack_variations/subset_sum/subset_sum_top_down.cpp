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

    if (subset_sum(n, a, s)){
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }

    return 0;
}

/*
4
1 2 4 6
7
*/

/*
4
1 2 4 6
14
*/
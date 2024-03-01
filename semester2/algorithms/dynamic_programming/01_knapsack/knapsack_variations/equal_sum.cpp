/*
Can the input be divided into 2 subsets
whose sum of elements are equal?
*/

#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n];
    int s = 0;
    for (int i=0; i<n; i++){
        cin >> a[i];
        s += a[i];
    }

    if (s % 2 == 0){
        int sum = s/2;
        bool dp[n+1][sum+1];

        dp[0][0] = true;
        for (int i=1; i<=sum; i++){
            dp[0][i] = false;
        }

        for (int i=1; i<=n; i++){
            for (int j=0; j<=sum; j++){
                bool op2 = dp[i-1][j];
                if (a[i-1] <= j){
                    // dp[i][j] = dp[i-1][j-a[i-1]] || dp[i-1][j];
                    dp[i][j] = dp[i-1][j-a[i-1]] || op2;
                }
                else {
                    // dp[i][j] = dp[i-1][j];
                    dp[i][j] = op2;
                }
            }
        }
        if (dp[n][sum]){
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }
    else {
        cout << "NO" << endl;
    }
    return 0;
}

/*
4
1 4 9 4
*/

/*
3
1 10 7
*/

/*
3
1 3 4
*/

/*
3
1 4 4
*/
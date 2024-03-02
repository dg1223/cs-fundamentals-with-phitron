#include <iostream>
#include <vector>
#include <climits>

using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n], s = 0;
    for (int i=0; i<n; i++){
        cin >> a[i];
        s += a[i];
    }

    bool dp[n+1][s+1];
    dp[0][0] = true;
    for (int i=1; i<=s; i++){
        dp[0][i] = false;
    }

    for (int i=1; i<=n; i++){
        for (int j=0; j<=s; j++){
            bool op2 = dp[i-1][j];
            if (a[i-1] <= j){
                dp[i][j] = dp[i-1][j-a[i-1]] || op2;
            }
            else {
                dp[i][j] = op2;
            }
        }
    }

    vector<int> v;
    for (int i=0; i<=n; i++){
        for (int j=0; j<=s; j++){
            if (dp[i][j] == 1){
                v.push_back(j);
            }
        }
    }

    int ans = INT_MAX;
    for(int val : v){
        int s1 = val;
        int s2 = s - s1;
        ans = min(ans, abs(s1-s2));
    }

    cout << ans << endl;

    // // to print out the sum matrix
    // for (int i=0; i<=n; i++){
    //     for (int j=0; j<=s; j++){
    //         if (dp[i][j] == 1){
    //             cout << j << " ";
    //         }
    //         else {
    //             cout << dp[i][j] << " ";
    //         }
    //     }
    //     cout << endl;
    // }

    return 0;
}

/*
4
1 5 4 11
*/

/*
VERY CONFUSING!!!
NEED BETTER EXPLANATION
*/

// Does a subset exist that adds up to the desired sum?

#include <iostream>

using namespace std;

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

    if (dp[n][s]){
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }

    return 0;
}

/*
4
1 2 3 6
7
*/

/*
5
1 2 3 4 5
0
*/

/*
5
2 3 4 5 6
1
*/

/*
6
10 20 30 40 50 60
100
*/
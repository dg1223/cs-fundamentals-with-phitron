/*
Time and space complexity: O(n*w)
*/

#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;

    int weight[n], value[n];

    for (int i=0; i<n; i++){
        cin >> weight[i];
    }

    for (int i=0; i<n; i++){
        cin >> value[i];
    }

    int W;
    cin >> W;

    // we need +1 row and col to store values for 0 weight and value
    int dp[n+1][W+1];

    for (int i=0; i<=n; i++){
        for (int j=0; j<=W; j++){
            // base case
            if (i == 0 || j == 0){
                dp[i][j] = 0;
            }
        }
    }

    for (int i=1; i<=n; i++){
        for (int j=1; j<=W; j++){
            // DRY
            int option_2 = dp[i-1][j];

            if (weight[i-1] <= j){
                int option_1 = dp[i-1][j-weight[i-1]] + value[i-1];
                // int option_2 = dp[i-1][j];
                dp[i][j] = max(option_1, option_2);
            }
            else {
                // int option_2 = dp[i-1][j]];
                dp[i][j] = option_2;
            }
        }
        cout << endl;
    }

    for (int i=0; i<=n; i++){
        for (int j=0; j<=W; j++){
            cout << dp[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

/*
4
2 3 4 5
1 3 5 3
8
*/

/*
3
2 5 3
4 5 2
5
*/
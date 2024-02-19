#include <iostream>

using namespace std;

int knapsack(int n, int weight[], int value[], int W){
    // base case
    // W-weight[n] >= 0 because weight[n] <= W
    if (n < 0 || W == 0){
        return 0;
    }

    // check if the bag can hold the item based on weight
    if (weight[n] <= W){
        /*
            We have 2 options here: take it or leave it
        */
        
        // take it: since we are putting the item in the bag, the bag 
        // can now contain lesser weight and will have more value
        // W-weight[n] >= 0 because weight[n] <= W
        int op1 = knapsack(n-1, weight, value, W-weight[n]) + value[n];
        // leave it: weight won't change because we are skipping the item
        int op2 = knapsack(n-1, weight, value, W);

        return max(op1, op2);
    }
    else {
        // only 1 option: leave it; bag can't hold
        int op2 = knapsack(n-1, weight, value, W);
        return op2;
    }
}

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

    // n-1 is the last index of the arrays of lenght n 
    // with index starting at 0
    cout << knapsack(n-1, weight, value, W) << endl;

    return 0;
}

/*
4
2 3 4 5
1 3 5 3
8
*/
#include <iostream>
#include <vector>
#include <cstring>

using namespace std;

const int MAX_ROW = 20;
const int MAX_COL = 20;

char grid[MAX_ROW][MAX_COL];
bool visited[MAX_ROW][MAX_COL];
vector<pair<int,int>> DIRECTIONS = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};

/*
We are declaring inputs globally so that we don't 
have to pass them to every function as parameters
*/
int n, m;

// check corners and edges
// bool isValid(int child_i, int child_j){
//     if (child_i < 0 || child_i >= n || child_j < 0 || child_j >= m){
//         return false;
//     }

//     return true;
// }
bool isValid(int child_i, int child_j){
    // within row bounds: child_i >= 0 && child_i < n
    // within col bounds: child_j >= 0 && child_j < m
    return (child_i >= 0 && child_i < n && child_j >= 0 && child_j < m);
}


void dfs(int src_i, int src_j){
    // print source
    cout << src_i << " " << src_j << endl;

    visited[src_i][src_j] = true;

    for (pair<int, int> direction : DIRECTIONS){
        // source = 1 1
        // children: 1 1, 1 2, 0 1, 2 1
        int child_i = src_i + direction.first;
        int child_j = src_j + direction.second;

        // check corners and edges
        /*
        if not outside border and not visited
        Note the dependency of the conditional statements.
        If outside border, the statement fails without checking
        if the child nodes have been visited or not
        */
        if (isValid(child_i, child_j) && !visited[child_i][child_j]){
            dfs(child_i, child_j);
        }

        // cout << child_i << " " << child_j << endl;
    }
}

int main(){    
    cin >> n >> m;

    if (n <= 0 || m <= 0 || n > MAX_ROW || m > MAX_COL) {
        cerr << "Invalid grid dimensions." << endl;
        return 1;
    }

    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            cin >> grid[i][j];
        }
    }

    int src_i, src_j;
    cin >> src_i >> src_j;

    if (!isValid(src_i, src_j)) {
        cerr << "Invalid source node." << endl;
        return 1;
    }

    cout << endl;

    // print matrix
    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            cout << grid[i][j];
        }
        cout << endl;
    }

    memset(visited, false, sizeof(visited));

    dfs(src_i, src_j);

    return 0;
}

/*
3 4
....
....
....
1 1
*/
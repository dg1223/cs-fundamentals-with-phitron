#include <iostream>
#include <vector>
#include <queue>
#include <cstring>

using namespace std;

const int MAX_ROW = 20;
const int MAX_COL = 20;
const vector<pair<int,int>> DIRECTIONS = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};

char grid[MAX_ROW][MAX_COL];
bool visited[MAX_ROW][MAX_COL];
int dist[MAX_ROW][MAX_COL];


/*
We are declaring inputs globally so that we don't 
have to pass them to every function as parameters
*/
int n, m;

// check corners and edges
bool isValid(int child_i, int child_j){
    // within row bounds: child_i >= 0 && child_i < n
    // within col bounds: child_j >= 0 && child_j < m
    return (child_i >= 0 && child_i < n && child_j >= 0 && child_j < m);
}

void bfs(int source_i, int source_j){
    queue<pair<int, int>> q;
    q.push({source_i, source_j});
    visited[source_i][source_j] = true;
    dist[source_i][source_j] = 0;

    while (!q.empty()){
        // cout << "while" << endl;
        pair<int, int> parent = q.front();
        int first = parent.first;
        int second = parent.second;
        q.pop();

        // cout << "source: " << first << " " << second << endl;

        for (pair<int, int> direction : DIRECTIONS){
            // source = 1 1
            // children: 1 1, 1 2, 0 1, 2 1
            int child_i = first + direction.first;
            int child_j = second + direction.second;

            // check corners and edges
            /*
            if not outside border and not visited
            Note the dependency of the conditional statements.
            If outside border, the statement fails without checking
            if the child nodes have been visited or not
            */
            if (isValid(child_i, child_j) && !visited[child_i][child_j]){
                // cout << "if statement" << endl;
                q.push({child_i, child_j});
                visited[child_i][child_j] = true;
                dist[child_i][child_j] = dist[first][second] + 1;
            }
        }
    }
}

int main(){
    cin >> n >> m;

    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            cin >> grid[i][j];
        }
    }

    int source_i, source_j;
    cin >> source_i >> source_j;
    
    memset(visited, false, sizeof(visited));
    memset(dist, -1, sizeof(dist));

    bfs(source_i, source_j);

    cout << endl << "distance = " << dist[2][3] << endl;

    // // print distance array
    // for (int i=0; i<MAX_ROW; i++){
    //     for (int j=0; j<MAX_COL; j++){
    //         cout << dist[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    return 0;
}

/*
3 4
....
....
....
1 1
*/
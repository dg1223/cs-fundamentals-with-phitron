/*
Problem Statement

Rezia is trapped in a 2D maze of NxM size, starting at position R, 
and her goal is to reach the exit marked by D. The maze contains 
blocks represented by #, and she can only traverse through cells 
marked with dots (.). As she need to escape as early as possible, 
we need to determine the path she will follow.

Place an X in each cell representing Rezia's route to exit the maze. 
If there is no viable path for her to exit, leave the maze unchanged.

Note: Rezia can move in four directions – right, left, up, and down. 
It is crucial to adhere to the specified order: attempting right 
first, then left, followed by up, and finally down.

Input Format

    First line will contain N and M.
    Next line you will be given the 2D matrix.

Constraints
1 <= N, M <= 10^3

Output Format

    Output the final maze with marked X indicating the path she will follow.


*/

#include <iostream>
#include <vector>
#include <cstring>
#include <climits>
#include <algorithm>
#include <queue>


using namespace std;

const int MAX_ROW = 1005;
const int MAX_COL = 1005;

char grid[MAX_ROW][MAX_COL];
bool visited[MAX_ROW][MAX_COL];

// we are storing the coordinates of the parent cell
pair<int, int> par[MAX_ROW][MAX_COL];

// right, left, up, down
vector<pair<int,int>> DIRECTIONS = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};

int n, m;

bool isValid(int child_i, int child_j){
    return (child_i >= 1 && child_i <= n && child_j >= 1 && child_j <= m);
}

void bfs(int src_i, int src_j){
    queue<pair<int, int>> q;
    q.push({src_i, src_j});
    visited[src_i][src_j] = true;

    while (!q.empty()){
        pair<int, int> parent = q.front();
        int first = parent.first;
        int second = parent.second;
        // cout << "source q: " << first << ',' << second << endl;
        q.pop();

        for (pair<int, int> direction : DIRECTIONS){
            int child_i = first + direction.first;
            int child_j = second + direction.second;

            // cout << "child q: " << child_i << ',' << child_j << endl;

            if (isValid(child_i, child_j) && !visited[child_i][child_j] && (grid[child_i][child_j] == '.' || grid[child_i][child_j] == 'D') ){
                // cout << "pushing " << first << ',' << second << endl;
                q.push({child_i, child_j});
                visited[child_i][child_j] = true;
                par[child_i][child_j] = parent;
            }
        }
    }
}

void mark_shortest_path(pair<int, int> par[][MAX_COL], pair<int, int> dest){
    vector<pair<int, int>> path;
    while (dest.first != -1){
        // add coordinates of route to path
        path.push_back(dest);
        // coordinate of the next parent cell
        dest = {par[dest.first][dest.second].first, par[dest.first][dest.second].second};
    }

    // mark the route
    long unsigned int counter = 1;
    // for(auto val : path){
    //     cout << '(' << val.first << ',' << val.second << "), ";
    // }
    // cout << endl;
    for(pair<int, int> val : path){
        // cout << "path: " << val.first << "," << val.second << endl;
        if (counter == 1){
            counter++;
            continue;
        }
        if (counter == path.size()){
            break;
        }
        grid[val.first][val.second] = 'X';
        counter++;
    }
}

int main(){    
    cin >> n >> m;
    int source_i = -1, source_j = -1, target_i = -1, target_j = -1;

    for (int i=1; i<=n; i++){
        for (int j=1; j<=m; j++){
            cin >> grid[i][j];
            if (grid[i][j] == 'R'){
                source_i = i;
                source_j = j;
            }
            if (grid[i][j] == 'D'){
                target_i = i;
                target_j = j;
            }
        }
    }

    // call dfs 
    if (source_i == -1 || target_i == -1){
        // no source or destination given as input
        ;
    }
    else {
        memset(visited, false, sizeof(visited));
        memset(par, -1, sizeof(par));
        // cout << "source: " << source_i << ',' << source_j << endl;
        bfs(source_i, source_j);
        mark_shortest_path(par, {target_i, target_j});
    }

    // print resultant grid
    for (int i=1; i<=n; i++){
        for (int j=1; j<=m; j++){
            cout << grid[i][j];
        }
        cout << endl;
    }

    return 0;
}

/*
INPUT
5 6
...D.#
.##..#
....#.
.R#...
.#.##.

OUTPUT
...D.#
.##X.#
.XXX#.
.R#...
.#.##.
*/

/*
INPUT
5 6
...D.#
.R...#
....#.
..#...
.#.##.
*/

/*
OUTPUT
5 6
...D.#
.....#
.##.#.
.R#...
.#.##.
*/

/*
INPUT
5 6
...D.#
.....#
###.#.
.R#...
.#.##.
*/

/*
OUTPUT
1 3
R.D
*/

/*
INPUT
1 3
R#D
*/

/*
INPUT
1 4
R.D#
*/

/*
INPUT
2 4
#.D#
R.##
*/
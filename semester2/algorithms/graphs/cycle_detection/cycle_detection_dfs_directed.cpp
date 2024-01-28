/*
Use this template to:
1. detect cycles
2. who has cycle
*/

#include <iostream>
#include <vector>
#include <queue>
#include <cstring>

using namespace std;

const int n = 1e5+5;
bool visited[n];
bool path_visited[n];
vector<int> adj[n];
bool answer;

void dfs(int parent){
    visited[parent] = true;
    path_visited[parent] = true;
    // cout << parent << endl;
    for(int child : adj[parent]){
        if (path_visited[child]){
            answer = true;
        }
        if (!visited[child]){
            dfs(child);
        }
    }
    // kaj shesh
    // every dfs call will come to this point after they are done recursing
    // they recursive calls will hit this point in reverse order -> LIFO
    path_visited[parent] = false;
}

int main(){
    int n, e;
    cin >> n >> e;

    while (e--){
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
    }

    memset(visited, false, sizeof(visited));
    memset(path_visited, false, sizeof(path_visited));

    // we need the loop to detect cycle in every component
    answer = false;
    for (int i=0; i<n; i++){
        if (!visited[i]){
            dfs(i);
        }
    }

    // // check if parents are valid
    // for (int i=0; i<n; i++){
    //     cout << parent_array[i] << " ";
    // }

    if (answer){
        cout << "Cycle found";
    }
    else {
        cout << "Cycle not found";
    }

    return 0;
}

/*
input
7 8
2 1
1 0
0 3
3 1
2 4
4 5
5 6
2 6
*/

/*
2 1
0 1
*/

/*
7 7
4 5
0 4
0 6
1 0
1 2
2 3
3 1
*/

/*
7 6
4 5
0 4
0 6
1 0
1 2
2 3
*/
